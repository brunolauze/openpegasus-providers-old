
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RelatedStatisticalDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RelatedStatisticalDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RelatedStatisticalDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RelatedStatisticalDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RelatedStatisticalDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RelatedStatisticalDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RelatedStatisticalDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RelatedStatisticalDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RelatedStatisticalDataDeps_TRU64.h"
#else
#	include "UNIX_RelatedStatisticalDataDeps_STUB.h"
#endif
