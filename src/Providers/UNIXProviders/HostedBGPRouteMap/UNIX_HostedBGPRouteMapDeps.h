
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedBGPRouteMapDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedBGPRouteMapDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedBGPRouteMapDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedBGPRouteMapDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedBGPRouteMapDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedBGPRouteMapDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedBGPRouteMapDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedBGPRouteMapDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedBGPRouteMapDeps_TRU64.h"
#else
#	include "UNIX_HostedBGPRouteMapDeps_STUB.h"
#endif
