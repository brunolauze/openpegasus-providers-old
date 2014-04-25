#if defined(PEGASUS_OS_FREEBSD)
	UNIX_MessageLog logs;
	int logIndex;
	String fileName;
	FILE *fp;
	String msg;
	String data;
	CIMDateTime logDate;
	int currentYear;
#endif
