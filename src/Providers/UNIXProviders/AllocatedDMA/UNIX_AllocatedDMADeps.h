
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocatedDMADeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocatedDMADeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocatedDMADeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocatedDMADeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocatedDMADeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocatedDMADeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocatedDMADeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocatedDMADeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocatedDMADeps_TRU64.h"
#else
#	include "UNIX_AllocatedDMADeps_STUB.h"
#endif
