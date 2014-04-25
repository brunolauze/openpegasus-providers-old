
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_Priority8021QMarkerServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_Priority8021QMarkerServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_Priority8021QMarkerServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_Priority8021QMarkerServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_Priority8021QMarkerServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_Priority8021QMarkerServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_Priority8021QMarkerServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_Priority8021QMarkerServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_Priority8021QMarkerServiceDeps_TRU64.h"
#else
#	include "UNIX_Priority8021QMarkerServiceDeps_STUB.h"
#endif
