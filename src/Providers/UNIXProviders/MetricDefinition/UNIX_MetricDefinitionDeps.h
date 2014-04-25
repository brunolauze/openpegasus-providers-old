
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricDefinitionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricDefinitionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricDefinitionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricDefinitionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricDefinitionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricDefinitionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricDefinitionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricDefinitionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricDefinitionDeps_TRU64.h"
#else
#	include "UNIX_MetricDefinitionDeps_STUB.h"
#endif
