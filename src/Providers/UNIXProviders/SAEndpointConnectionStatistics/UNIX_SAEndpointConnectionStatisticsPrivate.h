
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_SAEndpointConnectionStatisticsPrivate_STUB.h"
#endif
