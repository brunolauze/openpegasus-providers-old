
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticsCollectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticsCollectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticsCollectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticsCollectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticsCollectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticsCollectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticsCollectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticsCollectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticsCollectionDeps_TRU64.h"
#else
#	include "UNIX_StatisticsCollectionDeps_STUB.h"
#endif
