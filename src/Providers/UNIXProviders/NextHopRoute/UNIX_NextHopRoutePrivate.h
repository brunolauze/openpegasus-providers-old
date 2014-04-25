
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextHopRoutePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextHopRoutePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextHopRoutePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextHopRoutePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextHopRoutePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextHopRoutePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextHopRoutePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextHopRoutePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextHopRoutePrivate_TRU64.h"
#else
#	include "UNIX_NextHopRoutePrivate_STUB.h"
#endif
