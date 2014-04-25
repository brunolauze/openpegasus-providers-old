
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CIMOMStatisticalDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CIMOMStatisticalDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CIMOMStatisticalDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CIMOMStatisticalDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CIMOMStatisticalDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CIMOMStatisticalDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CIMOMStatisticalDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CIMOMStatisticalDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CIMOMStatisticalDataDeps_TRU64.h"
#else
#	include "UNIX_CIMOMStatisticalDataDeps_STUB.h"
#endif
