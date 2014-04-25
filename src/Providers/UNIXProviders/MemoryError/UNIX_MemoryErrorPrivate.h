
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryErrorPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryErrorPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryErrorPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryErrorPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryErrorPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryErrorPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryErrorPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryErrorPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryErrorPrivate_TRU64.h"
#else
#	include "UNIX_MemoryErrorPrivate_STUB.h"
#endif
