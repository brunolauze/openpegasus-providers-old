
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CacheMemoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CacheMemoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CacheMemoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CacheMemoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CacheMemoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CacheMemoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CacheMemoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CacheMemoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CacheMemoryPrivate_TRU64.h"
#else
#	include "UNIX_CacheMemoryPrivate_STUB.h"
#endif
