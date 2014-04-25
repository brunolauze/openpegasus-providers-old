
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedRoutePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedRoutePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedRoutePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedRoutePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedRoutePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedRoutePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedRoutePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedRoutePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedRoutePrivate_TRU64.h"
#else
#	include "UNIX_HostedRoutePrivate_STUB.h"
#endif
