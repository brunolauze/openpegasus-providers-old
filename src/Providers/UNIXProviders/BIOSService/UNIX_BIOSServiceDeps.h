
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSServiceDeps_TRU64.h"
#else
#	include "UNIX_BIOSServiceDeps_STUB.h"
#endif
