
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SchedulingServiceToSchedulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SchedulingServiceToSchedulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SchedulingServiceToSchedulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SchedulingServiceToSchedulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SchedulingServiceToSchedulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SchedulingServiceToSchedulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SchedulingServiceToSchedulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SchedulingServiceToSchedulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SchedulingServiceToSchedulePrivate_TRU64.h"
#else
#	include "UNIX_SchedulingServiceToSchedulePrivate_STUB.h"
#endif
