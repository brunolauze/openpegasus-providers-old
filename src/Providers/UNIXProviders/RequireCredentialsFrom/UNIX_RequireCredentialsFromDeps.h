
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RequireCredentialsFromDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RequireCredentialsFromDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RequireCredentialsFromDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RequireCredentialsFromDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RequireCredentialsFromDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RequireCredentialsFromDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RequireCredentialsFromDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RequireCredentialsFromDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RequireCredentialsFromDeps_TRU64.h"
#else
#	include "UNIX_RequireCredentialsFromDeps_STUB.h"
#endif
