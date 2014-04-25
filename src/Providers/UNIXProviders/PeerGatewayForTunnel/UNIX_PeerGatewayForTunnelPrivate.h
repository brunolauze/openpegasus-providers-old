
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PeerGatewayForTunnelPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PeerGatewayForTunnelPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PeerGatewayForTunnelPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PeerGatewayForTunnelPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PeerGatewayForTunnelPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PeerGatewayForTunnelPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PeerGatewayForTunnelPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PeerGatewayForTunnelPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PeerGatewayForTunnelPrivate_TRU64.h"
#else
#	include "UNIX_PeerGatewayForTunnelPrivate_STUB.h"
#endif
