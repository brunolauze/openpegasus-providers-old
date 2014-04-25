
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizesDiskPartitionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizesDiskPartitionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizesDiskPartitionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizesDiskPartitionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizesDiskPartitionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizesDiskPartitionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizesDiskPartitionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizesDiskPartitionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizesDiskPartitionPrivate_TRU64.h"
#else
#	include "UNIX_RealizesDiskPartitionPrivate_STUB.h"
#endif
