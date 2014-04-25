
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BaseMetricValuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BaseMetricValuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BaseMetricValuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BaseMetricValuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BaseMetricValuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BaseMetricValuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BaseMetricValuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BaseMetricValuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BaseMetricValuePrivate_TRU64.h"
#else
#	include "UNIX_BaseMetricValuePrivate_STUB.h"
#endif
