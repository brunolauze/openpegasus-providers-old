
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MetricInstancePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MetricInstancePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MetricInstancePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MetricInstancePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MetricInstancePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MetricInstancePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MetricInstancePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MetricInstancePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MetricInstancePrivate_TRU64.h"
#else
#	include "UNIX_MetricInstancePrivate_STUB.h"
#endif
