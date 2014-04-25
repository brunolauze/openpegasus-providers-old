
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemPartitionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemPartitionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemPartitionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemPartitionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemPartitionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemPartitionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemPartitionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemPartitionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemPartitionPrivate_TRU64.h"
#else
#	include "UNIX_SystemPartitionPrivate_STUB.h"
#endif
