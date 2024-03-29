#ifdef PEGASUS_OS_FREEBSD

/*
 * Copyright (c) 1992, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Rick Macklem at The University of Guelph.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#if 0
#ifndef lint
static const char copyright[] =
"@(#) Copyright (c) 1992, 1993, 1994\n\
	The Regents of the University of California.  All rights reserved.\n";
#endif /* not lint */

#ifndef lint
static char sccsid[] = "@(#)mount_nfs.c	8.11 (Berkeley) 5/4/95";
#endif /* not lint */
#endif
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: head/sbin/mount_nfs/mount_nfs.c 247856 2013-03-05 22:41:35Z jkim $");

#define STRSIZ  (MNTNAMLEN+MNTPATHLEN+100)
#define PATH_MOUNTTAB	"/var/db/mounttab"

#include <sys/param.h>
#include <sys/linker.h>
#include <sys/module.h>
#include <sys/mount.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syslog.h>
#include <sys/uio.h>

#include <rpc/rpc.h>
#include <rpc/pmap_clnt.h>
#include <rpc/pmap_prot.h>
#include <rpcsvc/nfs_prot.h>
#include <rpcsvc/mount.h>

#include <nfsclient/nfs.h>

#include <arpa/inet.h>

#include <ctype.h>
#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sysexits.h>
#include <unistd.h>
#include <stdarg.h>

#include "UNIX_NFS_FREEBSD_mntopt.h"

/* Table for af,sotype -> netid conversions. */
struct nc_protos {
	const char *netid;
	int af;
	int sotype;
} nc_protos[] = {
	{"udp",		AF_INET,	SOCK_DGRAM},
	{"tcp",		AF_INET,	SOCK_STREAM},
	{"udp6",	AF_INET6,	SOCK_DGRAM},
	{"tcp6",	AF_INET6,	SOCK_STREAM},
	{NULL,		0,		0}
};

struct nfhret {
	u_long		stat;
	long		vers;
	long		auth;
	long		fhsize;
	u_char		nfh[NFS3_FHSIZE];
};

#define	BGRND	1
#define	ISBGRND	2
#define	OF_NOINET4	4
#define	OF_NOINET6	8

int retrycnt = -1;
int opflags = 0;
int nfsproto = IPPROTO_TCP;
int mnttcp_ok = 1;
int noconn = 0;
char *portspec = NULL;	/* Server nfs port; NULL means look up via rpcbind. */
struct sockaddr *addr;
int addrlen = 0;
u_char *fh = NULL;
int fhsize = 0;
int secflavor = -1;
int got_principal = 0;

enum mountmode {
	ANY,
	V2,
	V3,
	V4
} mountmode = ANY;

/* Return codes for nfs_tryproto. */
enum tryret {
	TRYRET_SUCCESS,
	TRYRET_TIMEOUT,		/* No response received. */
	TRYRET_REMOTEERR,	/* Error received from remote server. */
	TRYRET_LOCALERR		/* Local failure. */
};

static int	fallback_mount(struct iovec *iov, int iovlen);
static char	*sec_num_to_name(int num);
static int	getnfsargs(char *, struct iovec **iov, int *iovlen);
static struct netconfig *getnetconf_cached(const char *netid);
static const char	*netidbytype(int af, int sotype);
static int	xdr_dir(XDR *, char *);
static int	xdr_fh(XDR *, struct nfhret *);
static enum tryret nfs_tryproto(struct addrinfo *ai, char *hostp, char *spec,
    char **errstr, struct iovec **iov, int *iovlen);
static enum tryret returncode(enum clnt_stat stat, struct rpc_err *rpcerr);

int
checkpath(const char *path, char *resolved)
{
	struct stat sb;

	if (realpath(path, resolved) == NULL || stat(resolved, &sb) != 0)
		return (1);
	if (!S_ISDIR(sb.st_mode)) {
		errno = ENOTDIR;
		return (1);
	}
	return (0);
}

void
build_iovec(struct iovec **iov, int *iovlen, const char *name, void *val,
	    size_t len)
{
	int i;

	if (*iovlen < 0)
		return;
	i = *iovlen;
	*iov = (struct iovec *)realloc(*iov, sizeof **iov * (i + 2));
	if (*iov == NULL) {
		*iovlen = -1;
		return;
	}
	(*iov)[i].iov_base = strdup(name);
	(*iov)[i].iov_len = strlen(name) + 1;
	i++;
	(*iov)[i].iov_base = val;
	if (len == (size_t)-1) {
		if (val != NULL)
			len = strlen((char *)val) + 1;
		else
			len = 0;
	}
	(*iov)[i].iov_len = (int)len;
	*iovlen = ++i;
}

/*
 * This function is needed for compatibility with parameters
 * which used to use the mount_argf() command for the old mount() syscall.
 */
void
build_iovec_argf(struct iovec **iov, int *iovlen, const char *name,
    const char *fmt, ...)
{
	va_list ap;
	char val[255] = { 0 };

	va_start(ap, fmt);
	vsnprintf(val, sizeof(val), fmt, ap);
	va_end(ap);
	build_iovec(iov, iovlen, name, strdup(val), (size_t)-1);
}


int mount_nfs(char *spec, char *name)
{
	struct iovec *iov;
	//int num;
	int iovlen;
	int osversion;
	//char *p;
	char *fstype = NULL;
	char mntpath[MAXPATHLEN], errmsg[255];
	char hostname[MAXHOSTNAMELEN + 1], *gssname, gssn[MAXHOSTNAMELEN + 50];

	iov = NULL;
	iovlen = 0;
	memset(errmsg, 0, sizeof(errmsg));
	gssname = NULL;

	// -o bg
	//opflags |= BGRND; pass_flag_to_nmount=0;

	// -o fg
	//pass_flag_to_nmount=0;

	// -o gssname=<val>
	//pass_flag_to_nmount = 0;
	//gssname = val;

	// -o mntudp
	//mnttcp_ok = 0;
	//nfsproto = IPPROTO_UDP;

	// -o udp
	//nfsproto = IPPROTO_UDP;
	
	// -o tcp
	//nfsproto = IPPROTO_TCP;

	// -o noinet4
	//pass_flag_to_nmount=0;
	//opflags |= OF_NOINET4;
	// -o noinet6
	//pass_flag_to_nmount=0;
	//opflags |= OF_NOINET6;

	// -o noconn
	//noconn = 1; 

	// -o nfsv2
	//pass_flag_to_nmount=0;
	//mountmode = V2;

	// -o nfsv3
	//mountmode = V3;

	// -o nfsv4
	//pass_flag_to_nmount=0;
	//mountmode = V4; fstype = "nfs"; nfsproto = IPPROTO_TCP;
	//if (portspec == NULL)
		//portspec = "2049";



	// -o port=<val>
	//pass_flag_to_nmount=0;
	//asprintf(&portspec, "%d", atoi(val));
	//if (portspec == NULL) err(1, "asprintf");

	// -o principal
	//got_principal = 1;


	// -o sec=<val>
	//secflavor = sec_name_to_num(val);pass_flag_to_nmount=0;
	//if (secflavor < 0) { errx(1, "illegal sec value -- %s", val); }

	// -o retrycnt=<val>
	//num = strtol(val, &p, 10); pass_flag_to_nmount=0;
	//if (*p || num < 0) errx(1, "illegal retrycnt value -- %s", val);
	//retrycnt = num;

	//-o maxgroups=<val>
	//num = strtol(val, &p, 10);
	//if (*p || num <= 0) errx(1, "illegal maxgroups value -- %s", val);
	//set_rpc_maxgrouplist(num);


	// --- extra flags ---
	//if (pass_flag_to_nmount) build_iovec(&iov, &iovlen, opt, val, strlen(val) + 1);


	if (retrycnt == -1)
		/* The default is to keep retrying forever. */
		retrycnt = 0;

	/*
	 * If the fstye is "oldnfs", run the old NFS client unless the
	 * "nfsv4" option was specified.
	 */
	if (strcmp(fstype, "nfs") == 0) {
		if (modfind("nfscl") < 0) {
			/* Not present in kernel, try loading it */
			if (kldload("nfscl") < 0 ||
			    modfind("nfscl") < 0)
					return (-1); //errx(1, "nfscl is not available");
		}
	}

	/*
	 * Add the fqdn to the gssname, as required.
	 */
	if (gssname != NULL) {
		if (strchr(gssname, '@') == NULL &&
		    gethostname(hostname, MAXHOSTNAMELEN) == 0) {
			snprintf(gssn, sizeof (gssn), "%s@%s", gssname,
			    hostname);
			gssname = gssn;
		}
		build_iovec(&iov, &iovlen, "gssname", gssname,
		    strlen(gssname) + 1);
	}

	if (!getnfsargs(spec, &iov, &iovlen))
		return (-1);

	/* resolve the mountpoint with realpath(3) */
	if (checkpath(name, mntpath) != 0)
		return (-1); //err(1, "%s", mntpath);

	build_iovec(&iov, &iovlen, "fstype", fstype, (size_t)-1);
	build_iovec(&iov, &iovlen, "fspath", mntpath, (size_t)-1);
	build_iovec(&iov, &iovlen, "errmsg", errmsg, sizeof(errmsg));

	/*
	 * XXX:
	 * Backwards compatibility routines for older kernels.
	 * Remove this and fallback_mount() code when we do not need to support
	 * NFS mounts against older kernels which still need
	 * struct nfs_args to be passed in via nmount().
	 */
	osversion = getosreldate();
	if (osversion >= 702100) {
		if (nmount(iov, iovlen, 0))
			return (-1); //err(1, "%s, %s", mntpath, errmsg);
	} else {
		if (fallback_mount(iov, iovlen))
			return (-1); //err(1, "%s, %s", mntpath, errmsg);
	}
	return 0;
}

static int
findopt(struct iovec *iov, int iovlen, const char *name,
    char **valuep, int *lenp)
{
	int i;

	for (i = 0; i < iovlen/2; i++, iov += 2) {
		if (strcmp(name, (char*)iov[0].iov_base) == 0) {
			if (valuep)
				*valuep = (char*)iov[1].iov_base;
			if (lenp)
				*lenp = iov[1].iov_len;
			return (0);
		}
	}
	return (ENOENT);
}

static void
copyopt(struct iovec **newiov, int *newiovlen,
    struct iovec *iov, int iovlen, const char *name)
{
	char *value;
	int len;

	if (findopt(iov, iovlen, name, &value, &len) == 0)
		build_iovec(newiov, newiovlen, name, value, len);
}

/*
 * XXX: This function is provided for backwards
 *      compatibility with older kernels which did not support
 *      passing NFS mount options to nmount() as individual
 *      parameters.  It should be eventually be removed.
 */
static int
fallback_mount(struct iovec *iov, int iovlen)
{
	struct nfs_args args = {
	    .version = NFS_ARGSVERSION,
	    .addr = NULL,
	    .addrlen = sizeof (struct sockaddr_in),
	    .sotype = SOCK_STREAM,
	    .proto = 0,
	    .fh = NULL,
	    .fhsize = 0,
	    .flags = NFSMNT_RESVPORT,
	    .wsize = NFS_WSIZE,
	    .rsize = NFS_RSIZE,
	    .readdirsize = NFS_READDIRSIZE,
	    .timeo = 10,
	    .retrans = NFS_RETRANS,
	    .maxgrouplist = NFS_MAXGRPS,
	    .readahead = NFS_DEFRAHEAD,
	    .wcommitsize = 0,			/* was: NQ_DEFLEASE */
	    .deadthresh = NFS_MAXDEADTHRESH,	/* was: NQ_DEADTHRESH */
	    .hostname = NULL,
	    /* args version 4 */
	    .acregmin = NFS_MINATTRTIMO,
	    .acregmax = NFS_MAXATTRTIMO,
	    .acdirmin = NFS_MINDIRATTRTIMO,
	    .acdirmax = NFS_MAXDIRATTRTIMO,
	};
	int ret;
	char *opt;
	struct iovec *newiov;
	int newiovlen;

	if (findopt(iov, iovlen, "dumbtimer", NULL, NULL) == 0)
		args.flags |= NFSMNT_DUMBTIMR;
	if (findopt(iov, iovlen, "noconn", NULL, NULL) == 0)
		args.flags |= NFSMNT_NOCONN;
	if (findopt(iov, iovlen, "conn", NULL, NULL) == 0)
		args.flags |= NFSMNT_NOCONN;
	if (findopt(iov, iovlen, "nolockd", NULL, NULL) == 0)
		args.flags |= NFSMNT_NOLOCKD;
	if (findopt(iov, iovlen, "lockd", NULL, NULL) == 0)
		args.flags &= ~NFSMNT_NOLOCKD;
	if (findopt(iov, iovlen, "intr", NULL, NULL) == 0)
		args.flags |= NFSMNT_INT;
	if (findopt(iov, iovlen, "rdirplus", NULL, NULL) == 0)
		args.flags |= NFSMNT_RDIRPLUS;
	if (findopt(iov, iovlen, "resvport", NULL, NULL) == 0)
		args.flags |= NFSMNT_RESVPORT;
	if (findopt(iov, iovlen, "noresvport", NULL, NULL) == 0)
		args.flags &= ~NFSMNT_RESVPORT;
	if (findopt(iov, iovlen, "soft", NULL, NULL) == 0)
		args.flags |= NFSMNT_SOFT;
	if (findopt(iov, iovlen, "hard", NULL, NULL) == 0)
		args.flags &= ~NFSMNT_SOFT;
	if (findopt(iov, iovlen, "mntudp", NULL, NULL) == 0)
		args.sotype = SOCK_DGRAM;
	if (findopt(iov, iovlen, "udp", NULL, NULL) == 0)
		args.sotype = SOCK_DGRAM;
	if (findopt(iov, iovlen, "tcp", NULL, NULL) == 0)
		args.sotype = SOCK_STREAM;
	if (findopt(iov, iovlen, "nfsv3", NULL, NULL) == 0)
		args.flags |= NFSMNT_NFSV3;
	if (findopt(iov, iovlen, "readdirsize", &opt, NULL) == 0) {
		if (opt == NULL) { 
			errx(1, "illegal readdirsize");
		}
		ret = sscanf(opt, "%d", &args.readdirsize);
		if (ret != 1 || args.readdirsize <= 0) {
			errx(1, "illegal readdirsize: %s", opt);
		}
		args.flags |= NFSMNT_READDIRSIZE;
	}
	if (findopt(iov, iovlen, "readahead", &opt, NULL) == 0) {
		if (opt == NULL) { 
			errx(1, "illegal readahead");
		}
		ret = sscanf(opt, "%d", &args.readahead);
		if (ret != 1 || args.readahead <= 0) {
			errx(1, "illegal readahead: %s", opt);
		}
		args.flags |= NFSMNT_READAHEAD;
	}
	if (findopt(iov, iovlen, "wsize", &opt, NULL) == 0) {
		if (opt == NULL) { 
			errx(1, "illegal wsize");
		}
		ret = sscanf(opt, "%d", &args.wsize);
		if (ret != 1 || args.wsize <= 0) {
			errx(1, "illegal wsize: %s", opt);
		}
		args.flags |= NFSMNT_WSIZE;
	}
	if (findopt(iov, iovlen, "rsize", &opt, NULL) == 0) {
		if (opt == NULL) { 
			errx(1, "illegal rsize");
		}
		ret = sscanf(opt, "%d", &args.rsize);
		if (ret != 1 || args.rsize <= 0) {
			errx(1, "illegal wsize: %s", opt);
		}
		args.flags |= NFSMNT_RSIZE;
	}
	if (findopt(iov, iovlen, "retrans", &opt, NULL) == 0) {
		if (opt == NULL) { 
			errx(1, "illegal retrans");
		}
		ret = sscanf(opt, "%d", &args.retrans);
		if (ret != 1 || args.retrans <= 0) {
			errx(1, "illegal retrans: %s", opt);
		}
		args.flags |= NFSMNT_RETRANS;
	}
	if (findopt(iov, iovlen, "acregmin", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.acregmin);
		if (ret != 1 || args.acregmin < 0) {
			errx(1, "illegal acregmin: %s", opt);
		}
		args.flags |= NFSMNT_ACREGMIN;
	}
	if (findopt(iov, iovlen, "acregmax", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.acregmax);
		if (ret != 1 || args.acregmax < 0) {
			errx(1, "illegal acregmax: %s", opt);
		}
		args.flags |= NFSMNT_ACREGMAX;
	}
	if (findopt(iov, iovlen, "acdirmin", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.acdirmin);
		if (ret != 1 || args.acdirmin < 0) {
			errx(1, "illegal acdirmin: %s", opt);
		}
		args.flags |= NFSMNT_ACDIRMIN;
	}
	if (findopt(iov, iovlen, "acdirmax", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.acdirmax);
		if (ret != 1 || args.acdirmax < 0) {
			errx(1, "illegal acdirmax: %s", opt);
		}
		args.flags |= NFSMNT_ACDIRMAX;
	}
	if (findopt(iov, iovlen, "wcommitsize", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.wcommitsize);
		if (ret != 1 || args.wcommitsize < 0) {
			errx(1, "illegal wcommitsize: %s", opt);
		}
		args.flags |= NFSMNT_WCOMMITSIZE;
	}
	if (findopt(iov, iovlen, "deadthresh", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.deadthresh);
		if (ret != 1 || args.deadthresh <= 0) {
			errx(1, "illegal deadthresh: %s", opt);
		}
		args.flags |= NFSMNT_DEADTHRESH;
	}
	if (findopt(iov, iovlen, "timeout", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.timeo);
		if (ret != 1 || args.timeo <= 0) {
			errx(1, "illegal timeout: %s", opt);
		}
		args.flags |= NFSMNT_TIMEO;
	}
	if (findopt(iov, iovlen, "maxgroups", &opt, NULL) == 0) {
		ret = sscanf(opt, "%d", &args.maxgrouplist);
		if (ret != 1 || args.timeo <= 0) {
			errx(1, "illegal maxgroups: %s", opt);
		}
		args.flags |= NFSMNT_MAXGRPS;
	}
	if (findopt(iov, iovlen, "addr", &opt,
		&args.addrlen) == 0) {
		args.addr = (struct sockaddr *) opt;
	}
	if (findopt(iov, iovlen, "fh", &opt, &args.fhsize) == 0) {
		args.fh = reinterpret_cast<u_char*>(opt);
	}
	if (findopt(iov, iovlen, "hostname", &args.hostname,
		NULL) == 0) {
	}
	if (args.hostname == NULL) {
		errx(1, "Invalid hostname");
	}

	newiov = NULL;
	newiovlen = 0;

	build_iovec(&newiov, &newiovlen, "nfs_args", &args, sizeof(args));
	copyopt(&newiov, &newiovlen, iov, iovlen, "fstype");
	copyopt(&newiov, &newiovlen, iov, iovlen, "fspath");
	copyopt(&newiov, &newiovlen, iov, iovlen, "errmsg");

	return nmount(newiov, newiovlen, 0);
}

/*
 * Add an entry to PATH_MOUNTTAB for each mounted NFS filesystem,
 * so the client can notify the NFS server even after reboot.
 */
int
add_mtab(char *hostp, char *dirp)
{
	FILE *mtabfile;

	if ((mtabfile = fopen(PATH_MOUNTTAB, "a")) == NULL)
		return (0);
	else {
		fprintf(mtabfile, "%ld\t%s\t%s\n",
		    (long)time(NULL), hostp, dirp);
		fclose(mtabfile);
		return (1);
	}
}
/*
static int
sec_name_to_num(char *sec)
{
	if (!strcmp(sec, "krb5"))
		return (RPCSEC_GSS_KRB5);
	if (!strcmp(sec, "krb5i"))
		return (RPCSEC_GSS_KRB5I);
	if (!strcmp(sec, "krb5p"))
		return (RPCSEC_GSS_KRB5P);
	if (!strcmp(sec, "sys"))
		return (AUTH_SYS);
	return (-1);
}
*/

static char *
sec_num_to_name(int flavor)
{
	switch (flavor) {
	case RPCSEC_GSS_KRB5:
		return (strdup("krb5"));
	case RPCSEC_GSS_KRB5I:
		return (strdup("krb5i"));
	case RPCSEC_GSS_KRB5P:
		return (strdup("krb5p"));
	case AUTH_SYS:
		return (strdup("sys"));
	}
	return (NULL);
}

static int
getnfsargs(char *spec, struct iovec **iov, int *iovlen)
{
	struct addrinfo hints, *ai_nfs, *ai;
	enum tryret ret;
	int ecode, speclen, remoteerr, offset, have_bracket = 0;
	char *hostp, *delimp, *errstr;
	size_t len;
	static char nam[MNAMELEN + 1], pname[MAXHOSTNAMELEN + 5];

	if (*spec == '[' && (delimp = strchr(spec + 1, ']')) != NULL &&
	    *(delimp + 1) == ':') {
		hostp = spec + 1;
		spec = delimp + 2;
		have_bracket = 1;
	} else if ((delimp = strrchr(spec, ':')) != NULL) {
		hostp = spec;
		spec = delimp + 1;
	} else if ((delimp = strrchr(spec, '@')) != NULL) {
		warnx("path@server syntax is deprecated, use server:path");
		hostp = delimp + 1;
	} else {
		warnx("no <host>:<dirpath> nfs-name");
		return (0);
	}
	*delimp = '\0';

	/*
	 * If there has been a trailing slash at mounttime it seems
	 * that some mountd implementations fail to remove the mount
	 * entries from their mountlist while unmounting.
	 */
	for (speclen = strlen(spec); 
		speclen > 1 && spec[speclen - 1] == '/';
		speclen--)
		spec[speclen - 1] = '\0';
	if (strlen(hostp) + strlen(spec) + 1 > MNAMELEN) {
		warnx("%s:%s: %s", hostp, spec, strerror(ENAMETOOLONG));
		return (0);
	}
	/* Make both '@' and ':' notations equal */
	if (*hostp != '\0') {
		len = strlen(hostp);
		offset = 0;
		if (have_bracket)
			nam[offset++] = '[';
		memmove(nam + offset, hostp, len);
		if (have_bracket)
			nam[len + offset++] = ']';
		nam[len + offset++] = ':';
		memmove(nam + len + offset, spec, speclen);
		nam[len + speclen + offset] = '\0';
	}

	/*
	 * Handle an internet host address.
	 */
	memset(&hints, 0, sizeof hints);
	hints.ai_flags = AI_NUMERICHOST;
	if (nfsproto == IPPROTO_TCP)
		hints.ai_socktype = SOCK_STREAM;
	else if (nfsproto == IPPROTO_UDP)
		hints.ai_socktype = SOCK_DGRAM;

	if (getaddrinfo(hostp, portspec, &hints, &ai_nfs) != 0) {
		hints.ai_flags = AI_CANONNAME;
		if ((ecode = getaddrinfo(hostp, portspec, &hints, &ai_nfs))
		    != 0) {
			if (portspec == NULL)
				errx(1, "%s: %s", hostp, gai_strerror(ecode));
			else
				errx(1, "%s:%s: %s", hostp, portspec,
				    gai_strerror(ecode));
			return (0);
		}

		/*
		 * For a Kerberized nfs mount where the "principal"
		 * argument has not been set, add it here.
		 */
		if (got_principal == 0 && secflavor >= 0 &&
		    secflavor != AUTH_SYS && ai_nfs->ai_canonname != NULL) {
			snprintf(pname, sizeof (pname), "nfs@%s",
			    ai_nfs->ai_canonname);
			build_iovec(iov, iovlen, "principal", pname,
			    strlen(pname) + 1);
		}
	}

	ret = TRYRET_LOCALERR;
	for (;;) {
		/*
		 * Try each entry returned by getaddrinfo(). Note the
		 * occurrence of remote errors by setting `remoteerr'.
		 */
		remoteerr = 0;
		for (ai = ai_nfs; ai != NULL; ai = ai->ai_next) {
			if ((ai->ai_family == AF_INET6) &&
			    (opflags & OF_NOINET6))
				continue;
			if ((ai->ai_family == AF_INET) && 
			    (opflags & OF_NOINET4))
				continue;
			ret = nfs_tryproto(ai, hostp, spec, &errstr, iov,
			    iovlen);
			if (ret == TRYRET_SUCCESS)
				break;
			if (ret != TRYRET_LOCALERR)
				remoteerr = 1;
			if ((opflags & ISBGRND) == 0)
				fprintf(stderr, "%s\n", errstr);
		}
		if (ret == TRYRET_SUCCESS)
			break;

		/* Exit if all errors were local. */
		if (!remoteerr)
			exit(1);

		/*
		 * If retrycnt == 0, we are to keep retrying forever.
		 * Otherwise decrement it, and exit if it hits zero.
		 */
		if (retrycnt != 0 && --retrycnt == 0)
			exit(1);

		if ((opflags & (BGRND | ISBGRND)) == BGRND) {
			warnx("Cannot immediately mount %s:%s, backgrounding",
			    hostp, spec);
			opflags |= ISBGRND;
			if (daemon(0, 0) != 0)
				err(1, "daemon");
		}
		sleep(60); // what the heck??
	}
	freeaddrinfo(ai_nfs);

	build_iovec(iov, iovlen, "hostname", nam, (size_t)-1);
	/* Add mounted file system to PATH_MOUNTTAB */
	if (!add_mtab(hostp, spec))
		warnx("can't update %s for %s:%s", PATH_MOUNTTAB, hostp, spec);
	return (1);
}

/*
 * Try to set up the NFS arguments according to the address
 * family, protocol (and possibly port) specified in `ai'.
 *
 * Returns TRYRET_SUCCESS if successful, or:
 *   TRYRET_TIMEOUT		The server did not respond.
 *   TRYRET_REMOTEERR		The server reported an error.
 *   TRYRET_LOCALERR		Local failure.
 *
 * In all error cases, *errstr will be set to a statically-allocated string
 * describing the error.
 */
static enum tryret
nfs_tryproto(struct addrinfo *ai, char *hostp, char *spec, char **errstr,
    struct iovec **iov, int *iovlen)
{
	static char errbuf[256];
	struct sockaddr_storage nfs_ss;
	struct netbuf nfs_nb;
	struct nfhret nfhret;
	struct timeval try_;
	struct rpc_err rpcerr;
	CLIENT *clp;
	struct netconfig *nconf, *nconf_mnt;
	const char *netid, *netid_mnt;
	char *secname;
	int doconnect, nfsvers, mntvers, sotype;
	enum clnt_stat stat;
	enum mountmode trymntmode;

	sotype = 0;
	trymntmode = mountmode;
	errbuf[0] = '\0';
	*errstr = errbuf;

	if (nfsproto == IPPROTO_TCP)
		sotype = SOCK_STREAM;
	else if (nfsproto == IPPROTO_UDP)
		sotype = SOCK_DGRAM;

	if ((netid = netidbytype(ai->ai_family, sotype)) == NULL) {
		snprintf(errbuf, sizeof errbuf,
		    "af %d sotype %d not supported", ai->ai_family, sotype);
		return (TRYRET_LOCALERR);
	}
	if ((nconf = getnetconf_cached(netid)) == NULL) {
		snprintf(errbuf, sizeof errbuf, "%s: %s", netid, nc_sperror());
		return (TRYRET_LOCALERR);
	}
	/* The RPCPROG_MNT netid may be different. */
	if (mnttcp_ok) {
		netid_mnt = netid;
		nconf_mnt = nconf;
	} else {
		if ((netid_mnt = netidbytype(ai->ai_family, SOCK_DGRAM))
		     == NULL) {
			snprintf(errbuf, sizeof errbuf,
			    "af %d sotype SOCK_DGRAM not supported",
			     ai->ai_family);
			return (TRYRET_LOCALERR);
		}
		if ((nconf_mnt = getnetconf_cached(netid_mnt)) == NULL) {
			snprintf(errbuf, sizeof errbuf, "%s: %s", netid_mnt,
			    nc_sperror());
			return (TRYRET_LOCALERR);
		}
	}

tryagain:
	if (trymntmode == V4) {
		nfsvers = 4;
	} else if (trymntmode == V2) {
		nfsvers = 2;
		mntvers = 1;
	} else {
		nfsvers = 3;
		mntvers = 3;
	}

	if (portspec != NULL) {
		/* `ai' contains the complete nfsd sockaddr. */
		nfs_nb.buf = ai->ai_addr;
		nfs_nb.len = nfs_nb.maxlen = ai->ai_addrlen;
	} else {
		/* Ask the remote rpcbind. */
		nfs_nb.buf = &nfs_ss;
		nfs_nb.len = nfs_nb.maxlen = sizeof nfs_ss;

		if (!rpcb_getaddr(NFS_PROGRAM, nfsvers, nconf, &nfs_nb,
		    hostp)) {
			if (rpc_createerr.cf_stat == RPC_PROGVERSMISMATCH &&
			    trymntmode == ANY) {
				trymntmode = V2;
				goto tryagain;
			}
			snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s",
			    netid, hostp, spec,
			    clnt_spcreateerror("RPCPROG_NFS"));
			return (returncode(rpc_createerr.cf_stat,
			    &rpc_createerr.cf_error));
		}
	}

	/* Check that the server (nfsd) responds on the port we have chosen. */
	clp = clnt_tli_create(RPC_ANYFD, nconf, &nfs_nb, NFS_PROGRAM, nfsvers,
	    0, 0);
	if (clp == NULL) {
		snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s", netid,
		    hostp, spec, clnt_spcreateerror("nfsd: RPCPROG_NFS"));
		return (returncode(rpc_createerr.cf_stat,
		    &rpc_createerr.cf_error));
	}
	if (sotype == SOCK_DGRAM && noconn == 0) {
		/*
		 * Use connect(), to match what the kernel does. This
		 * catches cases where the server responds from the
		 * wrong source address.
		 */
		doconnect = 1;
		if (!clnt_control(clp, CLSET_CONNECT, (char *)&doconnect)) {
			clnt_destroy(clp);
			snprintf(errbuf, sizeof errbuf,
			    "[%s] %s:%s: CLSET_CONNECT failed", netid, hostp,
			    spec);
			return (TRYRET_LOCALERR);
		}
	}

	try_.tv_sec = 10;
	try_.tv_usec = 0;
	stat = clnt_call(clp, NFSPROC_NULL, (xdrproc_t)xdr_void, NULL,
			 (xdrproc_t)xdr_void, NULL, try_);
	if (stat != RPC_SUCCESS) {
		if (stat == RPC_PROGVERSMISMATCH && trymntmode == ANY) {
			clnt_destroy(clp);
			trymntmode = V2;
			goto tryagain;
		}
		clnt_geterr(clp, &rpcerr);
		snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s", netid,
		    hostp, spec, clnt_sperror(clp, "NFSPROC_NULL"));
		clnt_destroy(clp);
		return (returncode(stat, &rpcerr));
	}
	clnt_destroy(clp);

	/*
	 * For NFSv4, there is no mount protocol.
	 */
	if (trymntmode == V4) {
		/*
		 * Store the server address in nfsargsp, making
		 * sure to copy any locally allocated structures.
		 */
		addrlen = nfs_nb.len;
		addr = (struct sockaddr *)malloc(addrlen);
		if (addr == NULL)
			err(1, "malloc");
		bcopy(nfs_nb.buf, addr, addrlen);

		build_iovec(iov, iovlen, "addr", addr, addrlen);
		secname = sec_num_to_name(secflavor);
		if (secname != NULL)
			build_iovec(iov, iovlen, "sec", secname, (size_t)-1);
		build_iovec(iov, iovlen, "nfsv4", NULL, 0);
		build_iovec(iov, iovlen, "dirpath", spec, (size_t)-1);

		return (TRYRET_SUCCESS);
	}

	/* Send the MOUNTPROC_MNT RPC to get the root filehandle. */
	try_.tv_sec = 10;
	try_.tv_usec = 0;
	clp = clnt_tp_create(hostp, MOUNTPROG, mntvers, nconf_mnt);
	if (clp == NULL) {
		snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s", netid_mnt,
		    hostp, spec, clnt_spcreateerror("RPCMNT: clnt_create"));
		return (returncode(rpc_createerr.cf_stat,
		    &rpc_createerr.cf_error));
	}
	clp->cl_auth = authsys_create_default();
	nfhret.auth = secflavor;
	nfhret.vers = mntvers;
	stat = clnt_call(clp, MOUNTPROC_MNT, (xdrproc_t)xdr_dir, spec, 
			 (xdrproc_t)xdr_fh, &nfhret,
	    try_);
	auth_destroy(clp->cl_auth);
	if (stat != RPC_SUCCESS) {
		if (stat == RPC_PROGVERSMISMATCH && trymntmode == ANY) {
			clnt_destroy(clp);
			trymntmode = V2;
			goto tryagain;
		}
		clnt_geterr(clp, &rpcerr);
		snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s", netid_mnt,
		    hostp, spec, clnt_sperror(clp, "RPCPROG_MNT"));
		clnt_destroy(clp);
		return (returncode(stat, &rpcerr));
	}
	clnt_destroy(clp);

	if (nfhret.stat != 0) {
		snprintf(errbuf, sizeof errbuf, "[%s] %s:%s: %s", netid_mnt,
		    hostp, spec, strerror(nfhret.stat));
		return (TRYRET_REMOTEERR);
	}

	/*
	 * Store the filehandle and server address in nfsargsp, making
	 * sure to copy any locally allocated structures.
	 */
	addrlen = nfs_nb.len;
	addr = (struct sockaddr  *)malloc(addrlen);
	fhsize = nfhret.fhsize;
	fh = (unsigned char *)malloc(fhsize);
	if (addr == NULL || fh == NULL)
		err(1, "malloc");
	bcopy(nfs_nb.buf, addr, addrlen);
	bcopy(nfhret.nfh, fh, fhsize);

	build_iovec(iov, iovlen, "addr", addr, addrlen);
	build_iovec(iov, iovlen, "fh", fh, fhsize);
	secname = sec_num_to_name(nfhret.auth);
	if (secname)
		build_iovec(iov, iovlen, "sec", secname, (size_t)-1);
	if (nfsvers == 3)
		build_iovec(iov, iovlen, "nfsv3", NULL, 0);

	return (TRYRET_SUCCESS);
}

/*
 * Catagorise a RPC return status and error into an `enum tryret'
 * return code.
 */
static enum tryret
returncode(enum clnt_stat stat, struct rpc_err *rpcerr)
{
	switch (stat) {
	case RPC_TIMEDOUT:
		return (TRYRET_TIMEOUT);
	case RPC_PMAPFAILURE:
	case RPC_PROGNOTREGISTERED:
	case RPC_PROGVERSMISMATCH:
	/* XXX, these can be local or remote. */
	case RPC_CANTSEND:
	case RPC_CANTRECV:
		return (TRYRET_REMOTEERR);
	case RPC_SYSTEMERROR:
		switch (rpcerr->re_errno) {
		case ETIMEDOUT:
			return (TRYRET_TIMEOUT);
		case ENOMEM:
			break;
		default:
			return (TRYRET_REMOTEERR);
		}
		/* FALLTHROUGH */
	default:
		break;
	}
	return (TRYRET_LOCALERR);
}

/*
 * Look up a netid based on an address family and socket type.
 * `af' is the address family, and `sotype' is SOCK_DGRAM or SOCK_STREAM.
 *
 * XXX there should be a library function for this.
 */
static const char *
netidbytype(int af, int sotype)
{
	struct nc_protos *p;

	for (p = nc_protos; p->netid != NULL; p++) {
		if (af != p->af || sotype != p->sotype)
			continue;
		return (p->netid);
	}
	return (NULL);
}

/*
 * Look up a netconfig entry based on a netid, and cache the result so
 * that we don't need to remember to call freenetconfigent().
 *
 * Otherwise it behaves just like getnetconfigent(), so nc_*error()
 * work on failure.
 */
static struct netconfig *
getnetconf_cached(const char *netid)
{
	static struct nc_entry {
		struct netconfig *nconf;
		struct nc_entry *next;
	} *head;
	struct nc_entry *p;
	struct netconfig *nconf;

	for (p = head; p != NULL; p = p->next)
		if (strcmp(netid, p->nconf->nc_netid) == 0)
			return (p->nconf);

	if ((nconf = getnetconfigent(netid)) == NULL)
		return (NULL);
	if ((p = (struct nc_entry *)malloc(sizeof(*p))) == NULL)
		err(1, "malloc");
	p->nconf = nconf;
	p->next = head;
	head = p;

	return (p->nconf);
}

/*
 * xdr routines for mount rpc's
 */
static int
xdr_dir(XDR *xdrsp, char *dirp)
{
	return (xdr_string(xdrsp, &dirp, MNTPATHLEN));
}

static int
xdr_fh(XDR *xdrsp, struct nfhret *np)
{
	int i;
	long auth, authcnt, authfnd = 0;

	if (!xdr_u_long(xdrsp, &np->stat))
		return (0);
	if (np->stat)
		return (1);
	switch (np->vers) {
	case 1:
		np->fhsize = NFS_FHSIZE;
		return (xdr_opaque(xdrsp, (caddr_t)np->nfh, NFS_FHSIZE));
	case 3:
		if (!xdr_long(xdrsp, &np->fhsize))
			return (0);
		if (np->fhsize <= 0 || np->fhsize > NFS3_FHSIZE)
			return (0);
		if (!xdr_opaque(xdrsp, (caddr_t)np->nfh, np->fhsize))
			return (0);
		if (!xdr_long(xdrsp, &authcnt))
			return (0);
		for (i = 0; i < authcnt; i++) {
			if (!xdr_long(xdrsp, &auth))
				return (0);
			if (np->auth == -1) {
				np->auth = auth;
				authfnd++;
			} else if (auth == np->auth) {
				authfnd++;
			}
		}
		/*
		 * Some servers, such as DEC's OSF/1 return a nil authenticator
		 * list to indicate RPCAUTH_UNIX.
		 */
		if (authcnt == 0 && np->auth == -1)
			np->auth = AUTH_SYS;
		if (!authfnd && (authcnt > 0 || np->auth != AUTH_SYS))
			np->stat = EAUTH;
		return (1);
	};
	return (0);
}



#endif
