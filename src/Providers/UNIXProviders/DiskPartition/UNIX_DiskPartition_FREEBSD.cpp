#ifdef PEGASUS_OS_FREEBSD
/*-
 * Copyright (c) 2007, 2008 Marcel Moolenaar
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#define __UNIX_DISKPARTITION_PRIVATE_INTERNAL
#include "UNIX_DiskPartition_FREEBSD.hxx"
#undef  __UNIX_DISKPARTITION_PRIVATE_INTERNAL

#include <iostream>

struct gclass *
GeomHelper::find_class(struct gmesh *mesh, const char *name)
{
	struct gclass *classp;

	LIST_FOREACH(classp, &mesh->lg_class, lg_class) {
		if (strcmp(classp->lg_name, name) == 0)
			return (classp);
	}
	return (NULL);
}

struct ggeom *
GeomHelper::find_geom(struct gclass *classp, const char *name)
{
	struct ggeom *gp;

	if (strncmp(name, _PATH_DEV, sizeof(_PATH_DEV) - 1) == 0)
		name += sizeof(_PATH_DEV) - 1;
	LIST_FOREACH(gp, &classp->lg_geom, lg_geom) {
		if (strcmp(gp->lg_name, name) == 0)
			return (gp);
	}
	return (NULL);
}

const char *
GeomHelper::find_geomcfg(struct ggeom *gp, const char *cfg)
{
	struct gconfig *gc;

	LIST_FOREACH(gc, &gp->lg_config, lg_config) {
		if (!strcmp(gc->lg_name, cfg))
			return (gc->lg_val);
	}
	return (NULL);
}

const char *
GeomHelper::find_provcfg(struct gprovider *pp, const char *cfg)
{
	struct gconfig *gc;

	LIST_FOREACH(gc, &pp->lg_config, lg_config) {
		if (!strcmp(gc->lg_name, cfg))
			return (gc->lg_val);
	}
	return (NULL);
}

struct gprovider *
GeomHelper::find_provider(struct ggeom *gp, off_t minsector)
{
	struct gprovider *pp, *bestpp;
	const char *s;
	off_t sector, bestsector;

	bestpp = NULL;
	bestsector = 0;
	LIST_FOREACH(pp, &gp->lg_provider, lg_provider) {
		s = find_provcfg(pp, "start");
		sector = (off_t)strtoimax(s, NULL, 0);
		if (sector < minsector)
			continue;
		if (bestpp != NULL && sector >= bestsector)
			continue;

		bestpp = pp;
		bestsector = sector;
	}
	return (bestpp);
}

const char *
GeomHelper::fmtsize(int64_t rawsz)
{
	static char buf[5];

	humanize_number(buf, sizeof(buf), rawsz, "", HN_AUTOSCALE,
	    HN_B | HN_NOSPACE | HN_DECIMAL);
	return (buf);
}

const char *
GeomHelper::fmtattrib(struct gprovider *pp)
{
	static char buf[128];
	struct gconfig *gc;
	u_int idx;

	buf[0] = '\0';
	idx = 0;
	LIST_FOREACH(gc, &pp->lg_config, lg_config) {
		if (strcmp(gc->lg_name, "attrib") != 0)
			continue;
		idx += snprintf(buf + idx, sizeof(buf) - idx, "%s%s",
		    (idx == 0) ? " [" : ",", gc->lg_val);
	}
	if (idx > 0)
		snprintf(buf + idx, sizeof(buf) - idx, "] ");
	return (buf);
}

#define	ALIGNDOWN(d, a)	((d) - (d) % (a))
#define	ALIGNUP(d, a)	((d) % (a) ? (d) - (d) % (a) + (a): (d))


void *
GeomHelper::gctl_get_param(struct gctl_req *req, size_t len, const char *pfmt, va_list ap)
{
	struct gctl_req_arg *argp;
	char param[256];
	unsigned int i;
	void *p;

	vsnprintf(param, sizeof(param), pfmt, ap);
	for (i = 0; i < req->narg; i++) {
		argp = &req->arg[i];
		if (strcmp(param, argp->name))
			continue;
		if (!(argp->flag & GCTL_PARAM_RD))
			continue;
		p = argp->value;
		if (len == 0) {
			/* We are looking for a string. */
			if (argp->len < 1) {
				fprintf(stderr, "No length argument (%s).\n",
				    param);
				abort();
			}
			if (((char *)p)[argp->len - 1] != '\0') {
				fprintf(stderr, "Unterminated argument (%s).\n",
				    param);
				abort();
			}
		} else if ((int)len != argp->len) {
			fprintf(stderr, "Wrong length %s argument.\n", param);
			abort();
		}
		return (p);
	}
	fprintf(stderr, "No such argument (%s).\n", param);
	abort();
}


const char *
GeomHelper::gctl_get_ascii(struct gctl_req *req, const char *pfmt, ...)
{
	const char *p;
	va_list ap;

	va_start(ap, pfmt);
	p = (char*)gctl_get_param(req, 0, pfmt, ap);
	va_end(ap);
	return (p);
}

int
GeomHelper::gctl_has_param(struct gctl_req *req, const char *name)
{
	struct gctl_req_arg *ap;
	unsigned int i;

	if (req == NULL || req->error != NULL)
		return (0);

	for (i = 0; i < req->narg; i++) {
		ap = &req->arg[i];
		if (strcmp(ap->name, name) == 0)
			return (1);
	}
	return (0);
}

int
GeomHelper::gctl_get_int(struct gctl_req *req, const char *pfmt, ...)
{
	int *p;
	va_list ap;

	va_start(ap, pfmt);
	p = (int*)gctl_get_param(req, sizeof(int), pfmt, ap);
	va_end(ap);
	return (*p);
}

intmax_t
GeomHelper::gctl_get_intmax(struct gctl_req *req, const char *pfmt, ...)
{
	intmax_t *p;
	va_list ap;

	va_start(ap, pfmt);
	p = (intmax_t*)gctl_get_param(req, sizeof(intmax_t), pfmt, ap);
	va_end(ap);
	return (*p);
}

struct geomnode_t * GeomHelper::gpart_add_item(
	struct geomnode_t *tree, 
	int index, 
	const char* name, 
	char* providerName,
	intmax_t start,
	int64_t size,
	const char* scheme,
	const char* type,
	const char* rawtype,
	const char* label,
	bool corrupted,
	bool read,
	bool write,
	bool execute)
{
	struct geomnode_t *temp;
	struct geomnode_t *nn=(struct geomnode_t*)malloc(sizeof(struct geomnode_t));

	nn->index = index;
	if (name == NULL) sprintf(nn->name, "%s", "Unknown");
	else sprintf(nn->name,"%s", name);
	sprintf(nn->providerName, "%s", providerName);
	nn->size = size;
	nn->start = start;
	nn->size = size;
	if (scheme == NULL) sprintf(nn->scheme, "%s", "Unknown");
	else sprintf(nn->scheme,"%s", scheme);
	if (type == NULL) sprintf(nn->type, "%s", "Unknown");
	else 
	{
		if (strncmp(type, "!", 1) == 0 && strncmp(providerName, "md", 2) == 0)
			sprintf(nn->type, "%s", "freebsd-vnode");
		else 
			sprintf(nn->type, "%s", type);
	}
	if (rawtype == NULL) sprintf(nn->rawtype, "%s", "Unknown");
	else sprintf(nn->rawtype, "%s", rawtype);
	if (nn->label == NULL) sprintf(nn->label, "%s", "Unknown");
	else sprintf(nn->label, "%s", label);
	nn->corrupted = corrupted;
	nn->read = read;
	nn->write = write;
	nn->execute = execute;
	nn->next=NULL;
	/*
	std::cout << "START: " << start << std::endl;
	std::cout << "SIZE: " << size << std::endl;
	std::cout << "INDEX: " << index << std::endl;
	std::cout << "NAME: " << name << std::endl;
	std::cout << "PROVIDER NAME: " << providerName << std::endl;
	std::cout << "SCHEME: " << scheme << std::endl;
	std::cout << "TYPE: " << type << std::endl;
	std::cout << "RAWTYPE: " << rawtype << std::endl;
	std::cout << "LABEL: " << label << std::endl;
	std::cout << "--------------" << std::endl;
	*/

	if(tree==NULL)
	{
		tree=nn;
	}
	else
	{
		   temp=tree;
		   while(temp->next!=NULL)
		     temp=temp->next;
		   temp->next=nn;
	}
	return tree;
}

struct geomnode_t *
GeomHelper::gpart_show_geom(struct ggeom *gp, struct geomnode_t *tree, bool volonly)
{
	struct gprovider *pp;
	const char *s, *scheme;
	off_t first, last, sector, end;
	off_t length, secsz;
	int idx, wblocks, wname, wmax;

	scheme = find_geomcfg(gp, "scheme");
	if (scheme == NULL)
		errx(EXIT_FAILURE, "Scheme not found for geom %s", gp->lg_name);
	s = find_geomcfg(gp, "first");
	if (s == NULL)
		errx(EXIT_FAILURE, "Starting block not found for geom %s",
		    gp->lg_name);
	first = (off_t)strtoimax(s, NULL, 0);
	s = find_geomcfg(gp, "last");
	if (s == NULL)
		errx(EXIT_FAILURE, "Final block not found for geom %s",
		    gp->lg_name);
	last = (off_t)strtoimax(s, NULL, 0);
	wblocks = strlen(s);
	s = find_geomcfg(gp, "state");
	if (s == NULL)
		errx(EXIT_FAILURE, "State not found for geom %s", gp->lg_name);
	if (s != NULL && *s != 'C')
		s = NULL;
	wmax = strlen(gp->lg_name);

	//Show geom providers
	LIST_FOREACH(pp, &gp->lg_provider, lg_provider) {
		wname = strlen(pp->lg_name);
		if (wname > wmax)
			wmax = wname;
	}

	wname = wmax;
	pp = LIST_FIRST(&gp->lg_consumer)->lg_provider;
	secsz = pp->lg_sectorsize;
	/*
	printf("=>%*jd  %*jd  %*s  %s  (%s)%s\n",
	    wblocks, (intmax_t)first, wblocks, (intmax_t)(last - first + 1),
	    wname, gp->lg_name,
	    scheme, fmtsize(pp->lg_mediasize),
	    s ? " [CORRUPT]": "");
	*/
	bool corrupted = s ? true : false;

	while ((pp = find_provider(gp, first)) != NULL) {
		s = find_provcfg(pp, "start");
		sector = (off_t)strtoimax(s, NULL, 0);

		s = find_provcfg(pp, "end");
		end = (off_t)strtoimax(s, NULL, 0);
		length = end - sector + 1;

		s = find_provcfg(pp, "index");
		idx = atoi(s);
		/*
		if (first < sector) {
			printf("  %*jd  %*jd  %*s  - free -  (%s)\n",
			    wblocks, (intmax_t)first, wblocks,
			    (intmax_t)(sector - first), wname, "",
			    fmtsize((sector - first) * secsz));
		}
		*/
		/*
		printf("  %*jd  %*jd  %*s  %s %s (%s)\n",
		    wblocks, (intmax_t)sector, wblocks,
		    (intmax_t)length, wname, pp->lg_name,
		    find_provcfg(pp, "rawtype"), fmtattrib(pp),
		    fmtsize(pp->lg_mediasize));
		*/
		const char* type; 
		type = find_provcfg(pp, "type");
		if (volonly && (strcmp(type, "freebsd-boot") == 0 || 
			strcmp(type, "freebsd-swap"))) 
		{
			/* NOT A VOLUME */
		}
		else {
			tree = gpart_add_item(tree, idx, find_provcfg(pp, "label"),
				pp->lg_name,
				(intmax_t)sector,
				pp->lg_mediasize,
				scheme,
				find_provcfg(pp, "type"),
				find_provcfg(pp, "rawtype"),
				find_provcfg(pp, "label"),
				corrupted,
				true/* bool read */,
				true /* bool write */,
				true /* bool execute */
			);
		}
		/* Without Provider */
		/*
		printf("  %*jd  %*jd  %*d  %s %s (%s)\n",
		    wblocks, (intmax_t)sector, wblocks,
		    (intmax_t)length, wname, idx,
		    find_provcfg(pp, element), fmtattrib(pp),
		    fmtsize(pp->lg_mediasize));
		*/
		first = end + 1;
	}
	/*
	if (first <= last) {
		length = last - first + 1;
		printf("  %*jd  %*jd  %*s  - free -  (%s)\n",
		    wblocks, (intmax_t)first, wblocks, (intmax_t)length,
		    wname, "",
		    fmtsize(length * secsz));
	}
	printf("\n");
	*/
	return tree;
}

struct geomnode_t *
GeomHelper::gpart_show(struct geomnode_t *tree, bool volonly)
{
	struct gmesh mesh;
	struct gclass *classp;
	struct ggeom *gp;
	const char *name;
	int error;
	name = "PART"; //gctl_get_ascii(req, "arg%d", i);
	//element = "label";
	//element = "rawtype";
	//element = "type";
	error = geom_gettree(&mesh);
	if (error != 0)
		errc(EXIT_FAILURE, error, "Cannot get GEOM tree");
	classp = find_class(&mesh, name);
	if (classp == NULL) {
		geom_deletetree(&mesh);
		errx(EXIT_FAILURE, "Class %s not found.", name);
	}

	//Specific geom
	/*
	gp = find_geom(classp, name);
	if (gp != NULL)
		gpart_show_geom(gp, tree);
	else
		errx(EXIT_FAILURE, "No such geom: %s.", name);
	*/
	//All geom

	LIST_FOREACH(gp, &classp->lg_geom, lg_geom) {
		tree = gpart_show_geom(gp, tree, volonly);
	}

	geom_deletetree(&mesh);
	return tree;
}

struct geomnode_t * GeomHelper::getGeomTree(struct geomnode_t *tree)
{
	return gpart_show(tree, false);
}

struct geomnode_t * GeomHelper::getVolumes(struct geomnode_t *tree)
{
	return gpart_show(tree, true);
}


#endif