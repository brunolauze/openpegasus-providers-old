
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSElementDeps_TRU64.h"
#else
#	include "UNIX_BIOSElementDeps_STUB.h"
#endif
