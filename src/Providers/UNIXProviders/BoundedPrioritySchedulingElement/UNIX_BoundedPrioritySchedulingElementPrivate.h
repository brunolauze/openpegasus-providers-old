
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_TRU64.h"
#else
#	include "UNIX_BoundedPrioritySchedulingElementPrivate_STUB.h"
#endif
