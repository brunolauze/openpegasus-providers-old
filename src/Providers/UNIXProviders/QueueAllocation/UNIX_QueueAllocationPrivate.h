
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueAllocationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueAllocationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueAllocationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueAllocationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueAllocationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueAllocationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueAllocationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueAllocationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueAllocationPrivate_TRU64.h"
#else
#	include "UNIX_QueueAllocationPrivate_STUB.h"
#endif
