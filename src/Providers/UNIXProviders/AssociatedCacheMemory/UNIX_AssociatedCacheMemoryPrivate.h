
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedCacheMemoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedCacheMemoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedCacheMemoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedCacheMemoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedCacheMemoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedCacheMemoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedCacheMemoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedCacheMemoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedCacheMemoryPrivate_TRU64.h"
#else
#	include "UNIX_AssociatedCacheMemoryPrivate_STUB.h"
#endif
