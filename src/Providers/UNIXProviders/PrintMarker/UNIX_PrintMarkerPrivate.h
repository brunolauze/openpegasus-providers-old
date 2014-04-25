
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintMarkerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintMarkerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintMarkerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintMarkerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintMarkerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintMarkerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintMarkerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintMarkerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintMarkerPrivate_TRU64.h"
#else
#	include "UNIX_PrintMarkerPrivate_STUB.h"
#endif
