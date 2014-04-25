
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Priority8021QMarkerServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Priority8021QMarkerServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Priority8021QMarkerServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Priority8021QMarkerServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Priority8021QMarkerServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Priority8021QMarkerServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Priority8021QMarkerServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Priority8021QMarkerServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Priority8021QMarkerServicePrivate_TRU64.h"
#else
#	include "UNIX_Priority8021QMarkerServicePrivate_STUB.h"
#endif
