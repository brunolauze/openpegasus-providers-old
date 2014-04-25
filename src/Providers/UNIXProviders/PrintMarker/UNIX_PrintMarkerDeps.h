
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintMarkerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintMarkerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintMarkerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintMarkerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintMarkerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintMarkerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintMarkerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintMarkerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintMarkerDeps_TRU64.h"
#else
#	include "UNIX_PrintMarkerDeps_STUB.h"
#endif
