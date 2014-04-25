
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryOnCardPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryOnCardPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryOnCardPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryOnCardPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryOnCardPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryOnCardPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryOnCardPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryOnCardPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryOnCardPrivate_TRU64.h"
#else
#	include "UNIX_MemoryOnCardPrivate_STUB.h"
#endif
