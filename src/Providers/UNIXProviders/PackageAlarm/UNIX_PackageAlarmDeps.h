
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageAlarmDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageAlarmDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageAlarmDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageAlarmDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageAlarmDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageAlarmDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageAlarmDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageAlarmDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageAlarmDeps_TRU64.h"
#else
#	include "UNIX_PackageAlarmDeps_STUB.h"
#endif
