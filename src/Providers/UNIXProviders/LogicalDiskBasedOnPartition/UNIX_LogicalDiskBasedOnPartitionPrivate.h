
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_TRU64.h"
#else
#	include "UNIX_LogicalDiskBasedOnPartitionPrivate_STUB.h"
#endif
