
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricForMEPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricForMEPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricForMEPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricForMEPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricForMEPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricForMEPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricForMEPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricForMEPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricForMEPrivate_TRU64.h"
#else
#	include "UNIX_MetricForMEPrivate_STUB.h"
#endif
