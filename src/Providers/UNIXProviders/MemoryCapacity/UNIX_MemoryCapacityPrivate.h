
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryCapacityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryCapacityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryCapacityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryCapacityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryCapacityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryCapacityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryCapacityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryCapacityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryCapacityPrivate_TRU64.h"
#else
#	include "UNIX_MemoryCapacityPrivate_STUB.h"
#endif
