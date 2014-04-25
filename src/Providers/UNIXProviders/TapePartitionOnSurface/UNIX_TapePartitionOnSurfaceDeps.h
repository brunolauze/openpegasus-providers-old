
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TapePartitionOnSurfaceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TapePartitionOnSurfaceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TapePartitionOnSurfaceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TapePartitionOnSurfaceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TapePartitionOnSurfaceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TapePartitionOnSurfaceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TapePartitionOnSurfaceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TapePartitionOnSurfaceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TapePartitionOnSurfaceDeps_TRU64.h"
#else
#	include "UNIX_TapePartitionOnSurfaceDeps_STUB.h"
#endif
