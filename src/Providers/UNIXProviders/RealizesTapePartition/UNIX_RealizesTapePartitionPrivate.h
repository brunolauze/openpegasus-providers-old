
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizesTapePartitionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizesTapePartitionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizesTapePartitionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizesTapePartitionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizesTapePartitionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizesTapePartitionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizesTapePartitionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizesTapePartitionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizesTapePartitionPrivate_TRU64.h"
#else
#	include "UNIX_RealizesTapePartitionPrivate_STUB.h"
#endif
