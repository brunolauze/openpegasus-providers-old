

#include <err.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include <sys/fcntl.h>
#include <sys/param.h>
#include <sys/queue.h>
#include <sys/stat.h>


#define	_PATH_ZONETAB		"/usr/share/zoneinfo/zone.tab"
#define	_PATH_ISO3166		"/usr/share/misc/iso3166"
#define	_PATH_ZONEINFO		"/usr/share/zoneinfo"
#define	_PATH_LOCALTIME		"/etc/localtime"
#define	_PATH_DB		"/var/db/zoneinfo"
#define	_PATH_WALL_CMOS_CLOCK	"/etc/wall_cmos_clock"

#ifdef PATH_MAX
#define	SILLY_BUFFER_SIZE	2*PATH_MAX
#else
#warning "Somebody needs to fix this to dynamically size this buffer."
#define	SILLY_BUFFER_SIZE	2048
#endif

void
__TZ_CLASS::read_zones(void)
{
	FILE		*fp;
	fp = fopen(_PATH_ZONETAB, "r");
	if (!fp)
		return; //err(1, "%s", _PATH_ZONETAB);
	char buf[1024];
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		if (buf[0] == '#')
			continue;
		buf[1023] = '\0';
		char *line = CIMHelper::trim(buf);
		std::vector<std::string> vec = CIMHelper::split(line, '\t');
		struct zone_t *nn = (struct zone_t *)malloc(sizeof(struct zone_t));
		nn->next = NULL;
		if (vec.size() == 4)
		{
			nn->descr = strdup(vec[3].c_str());
		}
		else
		{
			nn->descr = strdup(vec[2].c_str());
		}
		nn->filename = strdup(vec[2].c_str());
		struct zone_t *tmp = zones;
		if (zones == NULL)
		{
			zones = nn;
		}
		else {
			while(tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = nn;
		}
	}
	fclose(fp);
}