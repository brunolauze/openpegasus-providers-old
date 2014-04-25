
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricForMEDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricForMEDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricForMEDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricForMEDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricForMEDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricForMEDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricForMEDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricForMEDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricForMEDeps_TRU64.h"
#else
#	include "UNIX_MetricForMEDeps_STUB.h"
#endif
