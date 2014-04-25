
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MemoryCapacityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MemoryCapacityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MemoryCapacityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MemoryCapacityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MemoryCapacityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MemoryCapacityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MemoryCapacityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MemoryCapacityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MemoryCapacityDeps_TRU64.h"
#else
#	include "UNIX_MemoryCapacityDeps_STUB.h"
#endif
