
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueToSchedulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueToSchedulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueToSchedulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueToSchedulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueToSchedulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueToSchedulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueToSchedulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueToSchedulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueToSchedulePrivate_TRU64.h"
#else
#	include "UNIX_QueueToSchedulePrivate_STUB.h"
#endif
