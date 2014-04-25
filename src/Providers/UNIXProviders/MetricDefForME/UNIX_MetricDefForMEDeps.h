
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricDefForMEDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricDefForMEDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricDefForMEDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricDefForMEDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricDefForMEDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricDefForMEDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricDefForMEDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricDefForMEDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricDefForMEDeps_TRU64.h"
#else
#	include "UNIX_MetricDefForMEDeps_STUB.h"
#endif
