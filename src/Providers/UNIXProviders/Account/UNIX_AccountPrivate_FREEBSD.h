#if defined(PEGASUS_OS_FREEBSD)
	static bool hasPasswordMinimumLength(const passwd* pw);
	static bool hasPasswordForceMixCase(const passwd* pw);
	static int getLoginRetries(const passwd* pw);
	static time_t getIdleTimeout(const passwd* pw);
	static time_t getLastLoginValue(const passwd* pw);

	passwd* user;

#endif
