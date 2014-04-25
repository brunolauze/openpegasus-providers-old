
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MonitorResolutionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MonitorResolutionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MonitorResolutionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MonitorResolutionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MonitorResolutionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MonitorResolutionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MonitorResolutionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MonitorResolutionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MonitorResolutionPrivate_TRU64.h"
#else
#	include "UNIX_MonitorResolutionPrivate_STUB.h"
#endif
