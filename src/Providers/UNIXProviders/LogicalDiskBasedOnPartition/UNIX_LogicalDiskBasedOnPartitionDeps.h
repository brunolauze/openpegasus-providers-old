
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_TRU64.h"
#else
#	include "UNIX_LogicalDiskBasedOnPartitionDeps_STUB.h"
#endif
