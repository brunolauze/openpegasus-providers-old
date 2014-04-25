
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPServiceStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPServiceStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPServiceStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPServiceStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPServiceStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPServiceStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPServiceStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPServiceStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPServiceStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_BGPServiceStatisticsPrivate_STUB.h"
#endif
