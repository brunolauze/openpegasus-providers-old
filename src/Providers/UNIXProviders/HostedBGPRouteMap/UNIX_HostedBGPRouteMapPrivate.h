
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedBGPRouteMapPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedBGPRouteMapPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedBGPRouteMapPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedBGPRouteMapPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedBGPRouteMapPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedBGPRouteMapPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedBGPRouteMapPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedBGPRouteMapPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedBGPRouteMapPrivate_TRU64.h"
#else
#	include "UNIX_HostedBGPRouteMapPrivate_STUB.h"
#endif
