
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SchedulerUsedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SchedulerUsedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SchedulerUsedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SchedulerUsedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SchedulerUsedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SchedulerUsedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SchedulerUsedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SchedulerUsedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SchedulerUsedPrivate_TRU64.h"
#else
#	include "UNIX_SchedulerUsedPrivate_STUB.h"
#endif
