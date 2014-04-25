
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintQueuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintQueuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintQueuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintQueuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintQueuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintQueuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintQueuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintQueuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintQueuePrivate_TRU64.h"
#else
#	include "UNIX_PrintQueuePrivate_STUB.h"
#endif
