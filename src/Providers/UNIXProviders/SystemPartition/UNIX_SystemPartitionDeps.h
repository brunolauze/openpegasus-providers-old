
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemPartitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemPartitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemPartitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemPartitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemPartitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemPartitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemPartitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemPartitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemPartitionDeps_TRU64.h"
#else
#	include "UNIX_SystemPartitionDeps_STUB.h"
#endif
