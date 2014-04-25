
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TapePartitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TapePartitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TapePartitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TapePartitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TapePartitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TapePartitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TapePartitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TapePartitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TapePartitionDeps_TRU64.h"
#else
#	include "UNIX_TapePartitionDeps_STUB.h"
#endif
