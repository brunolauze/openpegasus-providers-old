
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DesktopMonitorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DesktopMonitorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DesktopMonitorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DesktopMonitorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DesktopMonitorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DesktopMonitorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DesktopMonitorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DesktopMonitorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DesktopMonitorDeps_TRU64.h"
#else
#	include "UNIX_DesktopMonitorDeps_STUB.h"
#endif
