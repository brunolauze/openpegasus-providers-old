
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregationMetricDefinitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregationMetricDefinitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregationMetricDefinitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregationMetricDefinitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregationMetricDefinitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregationMetricDefinitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregationMetricDefinitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregationMetricDefinitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregationMetricDefinitionDeps_TRU64.h"
#else
#	include "UNIX_AggregationMetricDefinitionDeps_STUB.h"
#endif
