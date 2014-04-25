
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_PlatformWatchdogServiceCapabilitiesDeps_STUB.h"
#endif
