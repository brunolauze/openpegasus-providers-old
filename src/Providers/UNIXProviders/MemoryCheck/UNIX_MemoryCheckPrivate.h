
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryCheckPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryCheckPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryCheckPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryCheckPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryCheckPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryCheckPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryCheckPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryCheckPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryCheckPrivate_TRU64.h"
#else
#	include "UNIX_MemoryCheckPrivate_STUB.h"
#endif
