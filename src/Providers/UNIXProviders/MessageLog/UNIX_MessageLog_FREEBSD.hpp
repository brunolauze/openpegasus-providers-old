//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////

#define _PATH_LOGCONF "/etc/syslog.conf"
#define _PATH_LOGPID "LOGID"
#define _PATH_CONSOLE "/dev/console"

#define DEFUPRI         (LOG_USER|LOG_NOTICE)
#define DEFSPRI         (LOG_KERN|LOG_CRIT)
#define TIMERINTVL      30              /* interval for checking flush, mark */
#define TTYMSGTIME      1               /* timeout passed to ttymsg */
#define RCVBUF_MINSIZE  (80 * 1024)     /* minimum size of dgram rcv buffer */

#include <sys/param.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/queue.h>
#include <sys/uio.h>
#include <sys/un.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/syslimits.h>
#include <sys/types.h>

#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
 
#include <ctype.h>
#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <libutil.h>
#include <limits.h>
#include <paths.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <unistd.h>
#include <utmpx.h>

#define dprintf         //printf

#ifdef INET6
static int      family = PF_UNSPEC; /* protocol family (IPv4, IPv6 or both) */
#else
static int      family = PF_INET; /* protocol family (IPv4 only) */
#endif

static int      logflags = O_WRONLY|O_APPEND; /* flags used to open log files */
    

/* values for f_type */
#define F_UNUSED        0               /* unused entry */
#define F_FILE          1               /* regular file */
#define F_TTY           2               /* terminal */
#define F_CONSOLE       3               /* console terminal */
#define F_FORW          4               /* remote machine */
#define F_USERS         5               /* list of users */
#define F_WALL          6               /* everyone logged on */
#define F_PIPE          7               /* pipe to program */


UNIX_MessageLog::UNIX_MessageLog(void)
{
}

UNIX_MessageLog::~UNIX_MessageLog(void)
{
}


Boolean UNIX_MessageLog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MessageLog::getInstanceID() const
{
	if (f->f_fullname != NULL) 
	{
		return String(f->f_fullname);
	}
	return getCaption();
}

Boolean UNIX_MessageLog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MessageLog::getCaption() const
{
	if (f->f_filename != NULL)
		return String (f->f_filename);
	if (f->f_program != NULL)
		return String (f->f_program);
	
	char typeName[48];
	sprintf(typeName, "%d", f->f_type);

	return String(typeName);
}

Boolean UNIX_MessageLog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MessageLog::getDescription() const
{
	String s;
	s.append(f->f_facility);
	s.append(" logs will be saved in ");
	if (f->f_filename != NULL)
		s.append(f->f_filename);
	else 
		s.append("<unknown>");

	return String ("");
}

Boolean UNIX_MessageLog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MessageLog::getElementName() const
{
	return String("MessageLog");
}

Boolean UNIX_MessageLog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MessageLog::getInstallDate() const
{
	if (f->f_filename == NULL) return CIMHelper::NullDate;

	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	stat(f->f_filename, &attrib);		// get the attributes mnt
	clock = gmtime(&(attrib.st_birthtime));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_MessageLog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MessageLog::getName() const
{
	return getInstanceID();
}

Boolean UNIX_MessageLog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MessageLog::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK	

	return as;

}

Boolean UNIX_MessageLog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MessageLog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MessageLog::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_MessageLog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MessageLog::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_MessageLog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MessageLog::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MessageLog::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MessageLog::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_MessageLog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MessageLog::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_MessageLog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_MessageLog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MessageLog::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MessageLog::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastStateChange() const
{
	if (f->f_filename == NULL) return CIMHelper::NullDate;
	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	stat(f->f_filename, &attrib);		// get the attributes mnt
	clock = gmtime(&(attrib.st_mtime));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_MessageLog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MessageLog::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MessageLog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MessageLog::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_RECORDS, getMaxNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getMaxNumberOfRecords() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_RECORDS, getCurrentNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getCurrentNumberOfRecords() const
{
	if (f->f_filename == NULL) return Uint64(0);
	if (strcmp(f->f_filename, "*") == 0) return Uint64(0);
	if (strcmp(f->f_filename, _PATH_CONSOLE) == 0) return Uint64(0);
	if (access(f->f_filename, R_OK) != 0) return Uint64(0);
	FILE *fp;
	long linecount = 0;
	char val[512];
	if ((fp = fopen(f->f_filename, "r")) != NULL)
	{
		while (fgets(val, sizeof(val), fp) != NULL)
			linecount++;
	}
	fclose(fp);
	return Uint64(linecount);
}

Boolean UNIX_MessageLog::getOverwritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERWRITE_POLICY, getOverwritePolicy());
	return true;
}

Uint16 UNIX_MessageLog::getOverwritePolicy() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Uint16 UNIX_MessageLog::getLogState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MessageLog::getCreationClassName() const
{
	return String("UNIX_MessageLog");
}

Boolean UNIX_MessageLog::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_MessageLog::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MessageLog::getCapabilitiesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES_DESCRIPTIONS, getCapabilitiesDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getCapabilitiesDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MessageLog::getMaxLogSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LOG_SIZE, getMaxLogSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxLogSize() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getSizeOfHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_HEADER, getSizeOfHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfHeader() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEADER_FORMAT, getHeaderFormat());
	return true;
}

String UNIX_MessageLog::getHeaderFormat() const
{
	return String ("[DATE] - [MESSAGE]");
}

Boolean UNIX_MessageLog::getMaxRecordSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECORD_SIZE, getMaxRecordSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxRecordSize() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getSizeOfRecordHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_RECORD_HEADER, getSizeOfRecordHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfRecordHeader() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getRecordHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_HEADER_FORMAT, getRecordHeaderFormat());
	return true;
}

String UNIX_MessageLog::getRecordHeaderFormat() const
{
	return String ("[DATE] [MESSAGE]");
}

Boolean UNIX_MessageLog::getOtherPolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_POLICY_DESCRIPTION, getOtherPolicyDescription());
	return true;
}

String UNIX_MessageLog::getOtherPolicyDescription() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getTimeWhenOutdated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_WHEN_OUTDATED, getTimeWhenOutdated());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeWhenOutdated() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_MessageLog::getPercentageNearFull(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENTAGE_NEAR_FULL, getPercentageNearFull());
	return true;
}

Uint8 UNIX_MessageLog::getPercentageNearFull() const
{
	return Uint8(100);
}

Boolean UNIX_MessageLog::getLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CHANGE, getLastChange());
	return true;
}

Uint16 UNIX_MessageLog::getLastChange() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getTimeOfLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_CHANGE, getTimeOfLastChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastChange() const
{
	return getTimeOfLastStateChange();
}

Boolean UNIX_MessageLog::getRecordLastChanged(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_LAST_CHANGED, getRecordLastChanged());
	return true;
}

Uint64 UNIX_MessageLog::getRecordLastChanged() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getIsFrozen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_FROZEN, getIsFrozen());
	return true;
}

Boolean UNIX_MessageLog::getIsFrozen() const
{
	return Boolean(false);
}

Boolean UNIX_MessageLog::getCharacterSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTER_SET, getCharacterSet());
	return true;
}

Uint16 UNIX_MessageLog::getCharacterSet() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getFileName(String &s) const
{
	if (f->f_filename == NULL) return false;
	//cout << "WOULD HAVE LOAD: " << f->f_filename << endl;
	if (strcmp(f->f_filename, "*") == 0) return false;
	if (strcmp(f->f_filename, _PATH_CONSOLE) == 0) return false;
	if (access(f->f_filename, R_OK) != 0) return false;
	s.assign(f->f_filename);
	return true;
}

void  UNIX_MessageLog::logerror(const char *msg)
{
	//cout << msg << endl;
}

/*
 *  Decode a symbolic name to a numeric value
 */
int UNIX_MessageLog::decode(const char *name, const CODE *codetab)
{
        const CODE *c;
        char *p, buf[40];
               
        if (isdigit(*name))
                return (atoi(name));
                                        
        for (p = buf; *name && p < &buf[sizeof(buf) - 1]; p++, name++) {
                if (isupper(*name))
                        *p = tolower(*name);
                else
                        *p = *name;
        }
        *p = '\0';
        for (c = codetab; c->c_name; c++)
                if (!strcmp(buf, c->c_name))
                        return (c->c_val);

        return (-1);
}

/*
 * Crack a configuration file line
 */
void UNIX_MessageLog::cfline(const char *line, const char *prog, const char *host)
{
	struct addrinfo hints, *res;
	int error, i, pri, syncfile;
	const char *p, *q;
	char *bp;
	char buf[MAXLINE], ebuf[100];

	dprintf("cfline(\"%s\", f, \"%s\", \"%s\")\n", line, prog, host);

	errno = 0;	/* keep strerror() stuff out of logerror messages */

	/* clear out file entry */
	memset(f, 0, sizeof(*f));

	snprintf(f->f_fullname, sizeof(f->f_fullname), "%s", line);

	for (i = 0; i <= LOG_NFACILITIES; i++)
		f->f_pmask[i] = INTERNAL_NOPRI;

	/* save hostname if any */
	if (host && *host == '*')
		host = NULL;
	if (host) {
		int hl;

		f->f_host = strdup(host);
		if (f->f_host == NULL) {
			logerror("strdup");
			exit(1);
		}
		hl = strlen(f->f_host);
		if (hl > 0 && f->f_host[hl-1] == '.')
			f->f_host[--hl] = '\0';
		trimdomain(f->f_host, hl);
	}

	/* save program name if any */
	if (prog && *prog == '*')
		prog = NULL;
	if (prog) {
		f->f_program = strdup(prog);
		if (f->f_program == NULL) {
			logerror("strdup");
			exit(1);
		}
	}

	/* scan through the list of selectors */
	for (p = line; *p && *p != '\t' && *p != ' ';) {
		int pri_done;
		int pri_cmp;
		int pri_invert;

		/* find the end of this facility name list */
		for (q = p; *q && *q != '\t' && *q != ' ' && *q++ != '.'; )
			continue;

		/* get the priority comparison */
		pri_cmp = 0;
		pri_done = 0;
		pri_invert = 0;
		if (*q == '!') {
			pri_invert = 1;
			q++;
		}
		while (!pri_done) {
			switch (*q) {
			case '<':
				pri_cmp |= PRI_LT;
				q++;
				break;
			case '=':
				pri_cmp |= PRI_EQ;
				q++;
				break;
			case '>':
				pri_cmp |= PRI_GT;
				q++;
				break;
			default:
				pri_done++;
				break;
			}
		}

		/* collect priority name */
		for (bp = buf; *q && !strchr("\t,; ", *q); )
			*bp++ = *q++;
		*bp = '\0';

		/* skip cruft */
		while (strchr(",;", *q))
			q++;

		/* decode priority name */
		if (*buf == '*') {
			pri = LOG_PRIMASK;
			pri_cmp = PRI_LT | PRI_EQ | PRI_GT;
		} else {
			/* Ignore trailing spaces. */
			for (i = strlen(buf) - 1; i >= 0 && buf[i] == ' '; i--)
				buf[i] = '\0';

			pri = decode(buf, prioritynames);
			if (pri < 0) {
				errno = 0;
				(void)snprintf(ebuf, sizeof ebuf,
				    "unknown priority name \"%s\"", buf);
				logerror(ebuf);
				return;
			}
		}
		if (!pri_cmp)
			pri_cmp = (PRI_EQ | PRI_GT);
		if (pri_invert)
			pri_cmp ^= PRI_LT | PRI_EQ | PRI_GT;

		/* scan facilities */

		while (*p && !strchr("\t.; ", *p)) {
			for (bp = buf; *p && !strchr("\t,;. ", *p); )
				*bp++ = *p++;
			*bp = '\0';

			snprintf(f->f_facility, sizeof ebuf, "%s", buf);

			if (*buf == '*') {
				for (i = 0; i < LOG_NFACILITIES; i++) {
					f->f_pmask[i] = pri;
					f->f_pcmp[i] = pri_cmp;
				}
			} else {
				i = decode(buf, facilitynames);
				if (i < 0) {
					errno = 0;
					(void)snprintf(ebuf, sizeof ebuf,
					    "unknown facility name \"%s\"",
					    buf);
					logerror(ebuf);
					return;
				}
				f->f_pmask[i >> 3] = pri;
				f->f_pcmp[i >> 3] = pri_cmp;
			}
			while (*p == ',' || *p == ' ')
				p++;
		}

		p = q;
	}

	/* skip to action part */
	while (*p == '\t' || *p == ' ')
		p++;

	if (*p == '-') {
		syncfile = 0;
		p++;
	} else
		syncfile = 1;

	switch (*p) {
	case '@':
		{
			char *tp;
			char endkey = ':';
			/*
			 * scan forward to see if there is a port defined.
			 * so we can't use strlcpy..
			 */
			i = sizeof(f->f_un.f_forw.f_hname);
			tp = f->f_un.f_forw.f_hname;
			p++;

			/*
			 * an ipv6 address should start with a '[' in that case
			 * we should scan for a ']'
			 */
			if (*p == '[') {
				p++;
				endkey = ']';
			}
			while (*p && (*p != endkey) && (i-- > 0)) {
				*tp++ = *p++;
			}
			if (endkey == ']' && *p == endkey)
				p++;
			*tp = '\0';
		}
		/* See if we copied a domain and have a port */
		if (*p == ':')
			p++;
		else
			p = NULL;

		memset(&hints, 0, sizeof(hints));
		hints.ai_family = family;
		hints.ai_socktype = SOCK_DGRAM;
		error = getaddrinfo(f->f_un.f_forw.f_hname,
				p ? p : "syslog", &hints, &res);
		if (error) {
			logerror(gai_strerror(error));
			break;
		}
		f->f_un.f_forw.f_addr = res;
		f->f_type = F_FORW;
		break;

	case '/':
		f->f_filename = strdup(p);
		if ((f->f_file = open(p, logflags, 0600)) < 0) {
			f->f_type = F_UNUSED;
			logerror(p);
			break;
		}
		if (syncfile)
			f->f_flags |= FFLAG_SYNC;
		if (isatty(f->f_file)) {
			if (strcmp(p, _PATH_CONSOLE) == 0)
				f->f_type = F_CONSOLE;
			else
				f->f_type = F_TTY;
			(void)strlcpy(f->f_un.f_fname, p + sizeof(_PATH_DEV) - 1,
			    sizeof(f->f_un.f_fname));
		} else {
			(void)strlcpy(f->f_un.f_fname, p, sizeof(f->f_un.f_fname));
			f->f_type = F_FILE;
		}
		break;

	case '|':
		f->f_un.f_pipe.f_pid = 0;
		(void)strlcpy(f->f_un.f_pipe.f_pname, p + 1,
		    sizeof(f->f_un.f_pipe.f_pname));
		f->f_type = F_PIPE;
		break;

	case '*':
		f->f_type = F_WALL;
		f->f_program = (char*)malloc(sizeof(char) * 8);
		strcpy(f->f_program, "system");
		break;

	default:
		for (i = 0; i < MAXUNAMES && *p; i++) {
			for (q = p; *q && *q != ','; )
				q++;
			(void)strncpy(f->f_un.f_uname[i], p, MAXLOGNAME - 1);
			if ((q - p) >= MAXLOGNAME)
				f->f_un.f_uname[i][MAXLOGNAME - 1] = '\0';
			else
				f->f_un.f_uname[i][q - p] = '\0';
			while (*q == ',' || *q == ' ')
				q++;
			p = q;
		}
		f->f_type = F_USERS;
		break;
	}
}




Boolean UNIX_MessageLog::initialize()
{
    //char oldLocalHostName[MAXHOSTNAMELEN];
    //char hostMsg[2*MAXHOSTNAMELEN+40];
    //char bootfileMsg[LINE_MAX];
    f = (struct filed *)malloc(sizeof(struct filed *));
	/* open the configuration file */
	if ((cf = fopen(_PATH_LOGCONF, "r")) == NULL) {
		dprintf("cannot open %s\n", _PATH_LOGCONF);
		/*
		if (*nextp == NULL) {
			logerror("calloc");
			return false;
		}
		cfline("*.ERR\t/dev/console", *nextp, "*", "*");
		(*nextp)->f_next = (struct filed *)calloc(1, sizeof(*f));
		if ((*nextp)->f_next == NULL) {
			logerror("calloc");
			exit(1);
		}
		cfline("*.PANIC\t*", (*nextp)->f_next, "*", "*");
		*/
		return false;
	}

	return true;
}

Boolean UNIX_MessageLog::load(int &pIndex)
{
	int i;
	char *p;
    char LocalHostName[MAXHOSTNAMELEN];	/* our hostname */
    const char *tmpHost = CIMHelper::HostName.getCString();
    sprintf(LocalHostName, "%s", tmpHost);
    char cline[LINE_MAX];
    char prog[NAME_MAX+1];
    char host[MAXHOSTNAMELEN];
	f->f_filename = NULL;
	/*
	 *  Foreach line in the conf table, open that file.
	 */

	(void)strlcpy(host, "*", sizeof(host));
	(void)strlcpy(prog, "*", sizeof(prog));
	if (fgets(cline, sizeof(cline), cf) != NULL) {

		/*
		 * check for end-of-section, comments, strip off trailing
		 * spaces and newline character. #!prog is treated specially:
		 * following lines apply only to that program.
		 */
		for (p = cline; isspace(*p); ++p)
			continue;
		if (*p == 0)
			return load(pIndex);
		if (*p == '#') {
			p++;
			if (*p != '!' && *p != '+' && *p != '-')
				return load(pIndex);
		}

		if (*p == '+' || *p == '-') {
			host[0] = *p++;
			while (isspace(*p))
				p++;
			if ((!*p) || (*p == '*')) {
				(void)strlcpy(host, "*", sizeof(host));
				return load(pIndex);
			}
			if (*p == '@')
				p = LocalHostName;
			for (i = 1; i < MAXHOSTNAMELEN - 1; i++) {
				if (!isalnum(*p) && *p != '.' && *p != '-'
				    && *p != ',' && *p != ':' && *p != '%')
					break;
				host[i] = *p++;
			}
			host[i] = '\0';
			return load(pIndex);
		}

		if (*p == '!') {
			p++;
			while (isspace(*p)) p++;
			if ((!*p) || (*p == '*')) {
				(void)strlcpy(prog, "*", sizeof(prog));
				return load(pIndex);
			}
			for (i = 0; i < NAME_MAX; i++) {
				if (!isprint(p[i]) || isspace(p[i]))
					break;
				prog[i] = p[i];
			}
			prog[i] = 0;
			return load(pIndex);
		}

		for (p = cline + 1; *p != '\0'; p++) {
			if (*p != '#')
				continue;
			if (*(p - 1) == '\\') {
				strcpy(p - 1, p);
				p--;
				continue;
			}
			*p = '\0';
			break;
		}
		for (i = strlen(cline) - 1; i >= 0 && isspace(cline[i]); i--)
			cline[i] = '\0';
		
		cfline(cline, prog, host);
		/*
		if (f->f_program != NULL)
			cout << "PROGRAM: " << f->f_program << endl;
		if (f->f_un.f_fname != NULL)
			cout << "NAME: " << f->f_un.f_fname << endl;
		if (f->f_pmask != NULL)
			cout << "PMASK: " << f->f_pmask << endl;
		if (f->f_pcmp != NULL)
			cout << "PCMP: " << f->f_pcmp << endl;
		if (f->f_filename != NULL)
			cout << "FILENAME: " << f->f_filename << endl;
		*/
		return true;
	}

	return false;
}

Boolean UNIX_MessageLog::finalize()
{
	/* close the configuration file */
	(void)fclose(cf);
	return true;
}

Boolean UNIX_MessageLog::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
