
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreconfiguredTunnelActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreconfiguredTunnelActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreconfiguredTunnelActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreconfiguredTunnelActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreconfiguredTunnelActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreconfiguredTunnelActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreconfiguredTunnelActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreconfiguredTunnelActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreconfiguredTunnelActionDeps_TRU64.h"
#else
#	include "UNIX_PreconfiguredTunnelActionDeps_STUB.h"
#endif
