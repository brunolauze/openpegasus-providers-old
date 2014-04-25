
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SchedulingServiceToScheduleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SchedulingServiceToScheduleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SchedulingServiceToScheduleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SchedulingServiceToScheduleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SchedulingServiceToScheduleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SchedulingServiceToScheduleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SchedulingServiceToScheduleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SchedulingServiceToScheduleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SchedulingServiceToScheduleDeps_TRU64.h"
#else
#	include "UNIX_SchedulingServiceToScheduleDeps_STUB.h"
#endif
