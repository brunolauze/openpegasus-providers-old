
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MonitorResolutionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MonitorResolutionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MonitorResolutionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MonitorResolutionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MonitorResolutionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MonitorResolutionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MonitorResolutionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MonitorResolutionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MonitorResolutionDeps_TRU64.h"
#else
#	include "UNIX_MonitorResolutionDeps_STUB.h"
#endif
