
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutesBGPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutesBGPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutesBGPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutesBGPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutesBGPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutesBGPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutesBGPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutesBGPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutesBGPPrivate_TRU64.h"
#else
#	include "UNIX_RoutesBGPPrivate_STUB.h"
#endif
