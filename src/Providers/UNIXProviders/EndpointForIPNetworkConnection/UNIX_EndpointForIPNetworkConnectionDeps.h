
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointForIPNetworkConnectionDeps_TRU64.h"
#else
#	include "UNIX_EndpointForIPNetworkConnectionDeps_STUB.h"
#endif
