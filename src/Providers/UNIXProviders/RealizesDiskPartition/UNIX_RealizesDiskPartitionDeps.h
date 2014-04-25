
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizesDiskPartitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizesDiskPartitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizesDiskPartitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizesDiskPartitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizesDiskPartitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizesDiskPartitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizesDiskPartitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizesDiskPartitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizesDiskPartitionDeps_TRU64.h"
#else
#	include "UNIX_RealizesDiskPartitionDeps_STUB.h"
#endif
