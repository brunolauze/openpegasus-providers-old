
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterListsInBGPRouteMapPrivate_TRU64.h"
#else
#	include "UNIX_FilterListsInBGPRouteMapPrivate_STUB.h"
#endif
