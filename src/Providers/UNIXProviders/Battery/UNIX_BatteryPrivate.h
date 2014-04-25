
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BatteryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BatteryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BatteryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BatteryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BatteryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BatteryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BatteryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BatteryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BatteryPrivate_TRU64.h"
#else
#	include "UNIX_BatteryPrivate_STUB.h"
#endif
