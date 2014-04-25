#if defined(PEGASUS_OS_FREEBSD)
	static void logerror(const char *msg);
	static int decode(const char *name, const CODE *codetab);
	void cfline(const char *line, const char *prog, const char *host);
	FILE *cf;
	struct filed *f;
#endif
