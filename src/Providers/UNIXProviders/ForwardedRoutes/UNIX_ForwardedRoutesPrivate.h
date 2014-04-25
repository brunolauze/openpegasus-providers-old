
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ForwardedRoutesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ForwardedRoutesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ForwardedRoutesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ForwardedRoutesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ForwardedRoutesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ForwardedRoutesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ForwardedRoutesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ForwardedRoutesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ForwardedRoutesPrivate_TRU64.h"
#else
#	include "UNIX_ForwardedRoutesPrivate_STUB.h"
#endif
