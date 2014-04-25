
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_TRU64.h"
#else
#	include "UNIX_NonWorkConservingSchedulingServiceDeps_STUB.h"
#endif
