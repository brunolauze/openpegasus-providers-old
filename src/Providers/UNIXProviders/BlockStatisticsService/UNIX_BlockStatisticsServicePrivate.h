
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStatisticsServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStatisticsServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStatisticsServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStatisticsServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStatisticsServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStatisticsServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStatisticsServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStatisticsServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStatisticsServicePrivate_TRU64.h"
#else
#	include "UNIX_BlockStatisticsServicePrivate_STUB.h"
#endif
