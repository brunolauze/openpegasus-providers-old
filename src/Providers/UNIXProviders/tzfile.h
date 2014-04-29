
#ifndef __TZFILE
#define __TZFILE
	struct zone_t {
		struct zone_t *next;
		char		*descr;
		char		*filename;
	};
#endif