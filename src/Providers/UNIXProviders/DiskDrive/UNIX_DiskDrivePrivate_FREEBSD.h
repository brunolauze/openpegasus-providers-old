#if defined(PEGASUS_OS_FREEBSD)
	
	struct disknode_t {
		char* name;
		uint32_t unit;
		char desc[512];
		char vendor[96];
		char product[96];
		char serial[96];
		char revision[32];
		char firmware[10];
		disknode_t* next;
	}__unused *disknode;

	union ccb ccb;
	int fd;
#endif
