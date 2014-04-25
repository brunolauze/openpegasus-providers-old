
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticalRuntimeOverviewPrivate_TRU64.h"
#else
#	include "UNIX_StatisticalRuntimeOverviewPrivate_STUB.h"
#endif
