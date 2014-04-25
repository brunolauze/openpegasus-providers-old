#if defined(PEGASUS_OS_FREEBSD)
	
	enum DBTYPE {
		POSTGRESQL, MYSQL, MARIADB, SQLITE, BDB, MONGODB, MEMCACHED
	};

	static Boolean isEnabled(DBTYPE type);

	DBTYPE currenttype;
	String caption;
	String name;
	String version;
	String desc;
	String owner;
	Boolean enabled;
	//Boolean running;
#endif
