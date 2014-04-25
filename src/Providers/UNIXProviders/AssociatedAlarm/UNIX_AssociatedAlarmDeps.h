
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedAlarmDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedAlarmDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedAlarmDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedAlarmDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedAlarmDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedAlarmDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedAlarmDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedAlarmDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedAlarmDeps_TRU64.h"
#else
#	include "UNIX_AssociatedAlarmDeps_STUB.h"
#endif
