
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextHopIPRoutePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextHopIPRoutePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextHopIPRoutePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextHopIPRoutePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextHopIPRoutePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextHopIPRoutePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextHopIPRoutePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextHopIPRoutePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextHopIPRoutePrivate_TRU64.h"
#else
#	include "UNIX_NextHopIPRoutePrivate_STUB.h"
#endif
