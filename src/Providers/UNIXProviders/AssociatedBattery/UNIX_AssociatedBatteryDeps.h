
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedBatteryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedBatteryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedBatteryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedBatteryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedBatteryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedBatteryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedBatteryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedBatteryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedBatteryDeps_TRU64.h"
#else
#	include "UNIX_AssociatedBatteryDeps_STUB.h"
#endif
