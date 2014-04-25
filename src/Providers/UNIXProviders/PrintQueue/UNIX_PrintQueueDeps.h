
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintQueueDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintQueueDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintQueueDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintQueueDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintQueueDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintQueueDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintQueueDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintQueueDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintQueueDeps_TRU64.h"
#else
#	include "UNIX_PrintQueueDeps_STUB.h"
#endif
