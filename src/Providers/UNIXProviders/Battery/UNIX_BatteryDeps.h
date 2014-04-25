
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BatteryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BatteryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BatteryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BatteryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BatteryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BatteryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BatteryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BatteryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BatteryDeps_TRU64.h"
#else
#	include "UNIX_BatteryDeps_STUB.h"
#endif
