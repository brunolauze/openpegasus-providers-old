
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ForwardedRoutesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ForwardedRoutesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ForwardedRoutesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ForwardedRoutesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ForwardedRoutesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ForwardedRoutesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ForwardedRoutesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ForwardedRoutesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ForwardedRoutesDeps_TRU64.h"
#else
#	include "UNIX_ForwardedRoutesDeps_STUB.h"
#endif
