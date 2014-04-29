#if defined(PEGASUS_OS_FREEBSD)
	void read_zones(void);
	struct zone_t *zones;
	struct zone_t *current;
#endif
