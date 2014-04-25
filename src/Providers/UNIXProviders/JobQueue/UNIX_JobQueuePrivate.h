
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_JobQueuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_JobQueuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_JobQueuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_JobQueuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_JobQueuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_JobQueuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_JobQueuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_JobQueuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_JobQueuePrivate_TRU64.h"
#else
#	include "UNIX_JobQueuePrivate_STUB.h"
#endif
