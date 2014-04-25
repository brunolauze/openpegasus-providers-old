
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DesktopMonitorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DesktopMonitorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DesktopMonitorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DesktopMonitorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DesktopMonitorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DesktopMonitorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DesktopMonitorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DesktopMonitorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DesktopMonitorPrivate_TRU64.h"
#else
#	include "UNIX_DesktopMonitorPrivate_STUB.h"
#endif
