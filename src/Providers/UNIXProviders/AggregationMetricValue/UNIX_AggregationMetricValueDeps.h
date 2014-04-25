
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregationMetricValueDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregationMetricValueDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregationMetricValueDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregationMetricValueDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregationMetricValueDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregationMetricValueDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregationMetricValueDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregationMetricValueDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregationMetricValueDeps_TRU64.h"
#else
#	include "UNIX_AggregationMetricValueDeps_STUB.h"
#endif
