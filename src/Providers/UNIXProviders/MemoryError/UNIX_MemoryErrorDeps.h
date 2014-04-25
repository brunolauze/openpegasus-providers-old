
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryErrorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryErrorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryErrorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryErrorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryErrorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryErrorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryErrorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryErrorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryErrorDeps_TRU64.h"
#else
#	include "UNIX_MemoryErrorDeps_STUB.h"
#endif
