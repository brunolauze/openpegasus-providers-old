
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterListsInBGPRouteMapDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterListsInBGPRouteMapDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterListsInBGPRouteMapDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterListsInBGPRouteMapDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterListsInBGPRouteMapDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterListsInBGPRouteMapDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterListsInBGPRouteMapDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterListsInBGPRouteMapDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterListsInBGPRouteMapDeps_TRU64.h"
#else
#	include "UNIX_FilterListsInBGPRouteMapDeps_STUB.h"
#endif
