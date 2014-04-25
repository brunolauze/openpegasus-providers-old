
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSStringDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSStringDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSStringDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSStringDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSStringDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSStringDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSStringDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSStringDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSStringDeps_TRU64.h"
#else
#	include "UNIX_BIOSStringDeps_STUB.h"
#endif
