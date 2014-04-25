
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BoundedPrioritySchedulingElementDeps_TRU64.h"
#else
#	include "UNIX_BoundedPrioritySchedulingElementDeps_STUB.h"
#endif
