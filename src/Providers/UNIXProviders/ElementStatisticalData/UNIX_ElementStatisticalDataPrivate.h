
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ElementStatisticalDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ElementStatisticalDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ElementStatisticalDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ElementStatisticalDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ElementStatisticalDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ElementStatisticalDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ElementStatisticalDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ElementStatisticalDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ElementStatisticalDataPrivate_TRU64.h"
#else
#	include "UNIX_ElementStatisticalDataPrivate_STUB.h"
#endif
