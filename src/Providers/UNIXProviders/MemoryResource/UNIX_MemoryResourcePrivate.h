
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryResourcePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryResourcePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryResourcePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryResourcePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryResourcePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryResourcePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryResourcePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryResourcePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryResourcePrivate_TRU64.h"
#else
#	include "UNIX_MemoryResourcePrivate_STUB.h"
#endif
