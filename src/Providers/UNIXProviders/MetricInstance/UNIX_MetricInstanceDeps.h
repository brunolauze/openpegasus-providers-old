
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricInstanceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricInstanceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricInstanceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricInstanceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricInstanceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricInstanceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricInstanceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricInstanceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricInstanceDeps_TRU64.h"
#else
#	include "UNIX_MetricInstanceDeps_STUB.h"
#endif
