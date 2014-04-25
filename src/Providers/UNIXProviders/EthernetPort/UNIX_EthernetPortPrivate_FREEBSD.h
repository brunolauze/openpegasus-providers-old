#if defined(PEGASUS_OS_FREEBSD)

	static char* getAddress (struct sockaddr * sockaddr_ptr);
	struct ifaddrs *ifap;
	struct ifaddrs *ifap_head;
#endif
