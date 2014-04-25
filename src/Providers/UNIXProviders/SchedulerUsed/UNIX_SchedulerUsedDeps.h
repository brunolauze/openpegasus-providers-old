
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SchedulerUsedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SchedulerUsedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SchedulerUsedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SchedulerUsedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SchedulerUsedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SchedulerUsedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SchedulerUsedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SchedulerUsedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SchedulerUsedDeps_TRU64.h"
#else
#	include "UNIX_SchedulerUsedDeps_STUB.h"
#endif
