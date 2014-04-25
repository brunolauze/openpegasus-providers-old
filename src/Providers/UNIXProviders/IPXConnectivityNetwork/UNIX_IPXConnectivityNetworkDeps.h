
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPXConnectivityNetworkDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPXConnectivityNetworkDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPXConnectivityNetworkDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPXConnectivityNetworkDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPXConnectivityNetworkDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPXConnectivityNetworkDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPXConnectivityNetworkDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPXConnectivityNetworkDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPXConnectivityNetworkDeps_TRU64.h"
#else
#	include "UNIX_IPXConnectivityNetworkDeps_STUB.h"
#endif
