
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticsServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticsServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticsServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticsServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticsServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticsServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticsServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticsServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticsServiceDeps_TRU64.h"
#else
#	include "UNIX_StatisticsServiceDeps_STUB.h"
#endif
