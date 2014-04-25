
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_JobQueueDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_JobQueueDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_JobQueueDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_JobQueueDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_JobQueueDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_JobQueueDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_JobQueueDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_JobQueueDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_JobQueueDeps_TRU64.h"
#else
#	include "UNIX_JobQueueDeps_STUB.h"
#endif
