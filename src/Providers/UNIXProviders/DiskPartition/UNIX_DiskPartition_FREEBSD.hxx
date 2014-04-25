#ifdef PEGASUS_OS_FREEBSD


#ifndef __UNIX_DISKPARTITION_PRIVATE_H
#define __UNIX_DISKPARTITION_PRIVATE_H

#ifdef __UNIX_DISKPARTITION_PRIVATE_INTERNAL
#include <sys/stat.h>
#include <sys/vtoc.h>

#include <assert.h>
#include <ctype.h>
#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <libgeom.h>
#include <libutil.h>
#include <paths.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <inttypes.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdarg.h>

#endif 

struct geomnode_t 
{
	intmax_t start;
	int64_t size;
	bool read;
	bool write;
	bool execute;
	int index;
	char name[1024];
	char providerName[1024];
	char scheme[48];
	char type[256];
	char rawtype[256];
	char label[256];
	bool corrupted;
	struct geomnode_t *next;
};

class GeomHelper 
{
public:
	
	static struct geomnode_t * getGeomTree(struct geomnode_t *tree);
	static struct geomnode_t * getVolumes(struct geomnode_t *tree);

private:


#ifdef __UNIX_DISKPARTITION_PRIVATE_INTERNAL
	static struct gclass * find_class(struct gmesh *mesh, const char *name);
	static struct ggeom * find_geom(struct gclass *classp, const char *name);
	static const char * find_geomcfg(struct ggeom *gp, const char *cfg);
	static const char * find_provcfg(struct gprovider *pp, const char *cfg);
	static struct gprovider * find_provider(struct ggeom *gp, off_t minsector);
	static const char * fmtsize(int64_t rawsz);
	static const char * fmtattrib(struct gprovider *pp);
	static void * gctl_get_param(struct gctl_req *req, size_t len, const char *pfmt, va_list ap);
	static const char * gctl_get_ascii(struct gctl_req *req, const char *pfmt, ...);
	static int gctl_has_param(struct gctl_req *req, const char *name);
	static int gctl_get_int(struct gctl_req *req, const char *pfmt, ...);
	static intmax_t gctl_get_intmax(struct gctl_req *req, const char *pfmt, ...);
	static struct geomnode_t * gpart_show_geom(struct ggeom *gp, struct geomnode_t *tree, bool volonly);
	static struct geomnode_t * gpart_show(struct geomnode_t *tree, bool volonly);
	static struct geomnode_t * gpart_add_item(struct geomnode_t *tree, int index, const char* name, 
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
						bool execute);
#endif
};

#endif


#endif
