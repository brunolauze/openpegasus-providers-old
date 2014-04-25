
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSLoadedInNVDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSLoadedInNVDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSLoadedInNVDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSLoadedInNVDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSLoadedInNVDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSLoadedInNVDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSLoadedInNVDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSLoadedInNVDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSLoadedInNVDeps_TRU64.h"
#else
#	include "UNIX_BIOSLoadedInNVDeps_STUB.h"
#endif
