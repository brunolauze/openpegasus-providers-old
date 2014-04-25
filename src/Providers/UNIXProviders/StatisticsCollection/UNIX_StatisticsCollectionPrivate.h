
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticsCollectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticsCollectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticsCollectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticsCollectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticsCollectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticsCollectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticsCollectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticsCollectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticsCollectionPrivate_TRU64.h"
#else
#	include "UNIX_StatisticsCollectionPrivate_STUB.h"
#endif
