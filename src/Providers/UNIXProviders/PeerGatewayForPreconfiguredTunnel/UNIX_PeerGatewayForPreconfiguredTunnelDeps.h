
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_TRU64.h"
#else
#	include "UNIX_PeerGatewayForPreconfiguredTunnelDeps_STUB.h"
#endif
