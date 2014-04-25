
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointOfNetworkPipeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointOfNetworkPipeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointOfNetworkPipeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointOfNetworkPipeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointOfNetworkPipeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointOfNetworkPipeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointOfNetworkPipeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointOfNetworkPipeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointOfNetworkPipeDeps_TRU64.h"
#else
#	include "UNIX_EndpointOfNetworkPipeDeps_STUB.h"
#endif
