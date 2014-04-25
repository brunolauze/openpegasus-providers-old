
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticalRuntimeOverviewDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticalRuntimeOverviewDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticalRuntimeOverviewDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticalRuntimeOverviewDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticalRuntimeOverviewDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticalRuntimeOverviewDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticalRuntimeOverviewDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticalRuntimeOverviewDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticalRuntimeOverviewDeps_TRU64.h"
#else
#	include "UNIX_StatisticalRuntimeOverviewDeps_STUB.h"
#endif
