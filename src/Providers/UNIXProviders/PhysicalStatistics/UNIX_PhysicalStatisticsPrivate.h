
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_PhysicalStatisticsPrivate_STUB.h"
#endif
