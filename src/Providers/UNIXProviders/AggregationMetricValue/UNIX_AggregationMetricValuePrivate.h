
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregationMetricValuePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregationMetricValuePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregationMetricValuePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregationMetricValuePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregationMetricValuePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregationMetricValuePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregationMetricValuePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregationMetricValuePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregationMetricValuePrivate_TRU64.h"
#else
#	include "UNIX_AggregationMetricValuePrivate_STUB.h"
#endif
