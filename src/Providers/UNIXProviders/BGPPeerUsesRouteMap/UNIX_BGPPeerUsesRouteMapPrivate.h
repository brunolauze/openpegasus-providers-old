
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPPeerUsesRouteMapPrivate_TRU64.h"
#else
#	include "UNIX_BGPPeerUsesRouteMapPrivate_STUB.h"
#endif
