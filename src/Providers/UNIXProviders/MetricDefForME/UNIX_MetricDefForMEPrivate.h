
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricDefForMEPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricDefForMEPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricDefForMEPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricDefForMEPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricDefForMEPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricDefForMEPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricDefForMEPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricDefForMEPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricDefForMEPrivate_TRU64.h"
#else
#	include "UNIX_MetricDefForMEPrivate_STUB.h"
#endif
