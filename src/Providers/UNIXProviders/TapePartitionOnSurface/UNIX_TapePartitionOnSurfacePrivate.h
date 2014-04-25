
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TapePartitionOnSurfacePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TapePartitionOnSurfacePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TapePartitionOnSurfacePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TapePartitionOnSurfacePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TapePartitionOnSurfacePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TapePartitionOnSurfacePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TapePartitionOnSurfacePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TapePartitionOnSurfacePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TapePartitionOnSurfacePrivate_TRU64.h"
#else
#	include "UNIX_TapePartitionOnSurfacePrivate_STUB.h"
#endif
