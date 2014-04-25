
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrioritySchedulingElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrioritySchedulingElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrioritySchedulingElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrioritySchedulingElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrioritySchedulingElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrioritySchedulingElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrioritySchedulingElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrioritySchedulingElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrioritySchedulingElementDeps_TRU64.h"
#else
#	include "UNIX_PrioritySchedulingElementDeps_STUB.h"
#endif
