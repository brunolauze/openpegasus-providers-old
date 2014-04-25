
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiskPartitionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiskPartitionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiskPartitionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiskPartitionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiskPartitionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiskPartitionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiskPartitionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiskPartitionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiskPartitionPrivate_TRU64.h"
#else
#	include "UNIX_DiskPartitionPrivate_STUB.h"
#endif
