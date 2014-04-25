
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WRRSchedulingElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WRRSchedulingElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WRRSchedulingElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WRRSchedulingElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WRRSchedulingElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WRRSchedulingElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WRRSchedulingElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WRRSchedulingElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WRRSchedulingElementDeps_TRU64.h"
#else
#	include "UNIX_WRRSchedulingElementDeps_STUB.h"
#endif
