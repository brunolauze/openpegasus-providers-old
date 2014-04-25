#if defined(PEGASUS_OS_FREEBSD)
		String getPackageProperty(const char *name, ...) const;
		static int getPkgFlag(uint64_t opt, bool remote);
		struct pkgdb *db;
        struct pkgdb_it *it;
        int query_flags;
        struct pkg *pkg;
        bool remote;
#endif
