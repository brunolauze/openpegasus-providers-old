
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocationSchedulingElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocationSchedulingElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocationSchedulingElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocationSchedulingElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocationSchedulingElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocationSchedulingElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocationSchedulingElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocationSchedulingElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocationSchedulingElementDeps_TRU64.h"
#else
#	include "UNIX_AllocationSchedulingElementDeps_STUB.h"
#endif
