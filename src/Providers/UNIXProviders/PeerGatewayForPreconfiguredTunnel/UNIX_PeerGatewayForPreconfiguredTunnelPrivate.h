
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_TRU64.h"
#else
#	include "UNIX_PeerGatewayForPreconfiguredTunnelPrivate_STUB.h"
#endif
