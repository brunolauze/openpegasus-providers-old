
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPPeerUsesRouteMapDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPPeerUsesRouteMapDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPPeerUsesRouteMapDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPPeerUsesRouteMapDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPPeerUsesRouteMapDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPPeerUsesRouteMapDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPPeerUsesRouteMapDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPPeerUsesRouteMapDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPPeerUsesRouteMapDeps_TRU64.h"
#else
#	include "UNIX_BGPPeerUsesRouteMapDeps_STUB.h"
#endif
