
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPConnectivitySubnetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPConnectivitySubnetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPConnectivitySubnetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPConnectivitySubnetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPConnectivitySubnetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPConnectivitySubnetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPConnectivitySubnetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPConnectivitySubnetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPConnectivitySubnetDeps_TRU64.h"
#else
#	include "UNIX_IPConnectivitySubnetDeps_STUB.h"
#endif
