
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WatchdogDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WatchdogDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WatchdogDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WatchdogDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WatchdogDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WatchdogDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WatchdogDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WatchdogDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WatchdogDeps_TRU64.h"
#else
#	include "UNIX_WatchdogDeps_STUB.h"
#endif
