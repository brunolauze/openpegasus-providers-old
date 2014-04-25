
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueHierarchyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueHierarchyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueHierarchyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueHierarchyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueHierarchyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueHierarchyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueHierarchyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueHierarchyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueHierarchyDeps_TRU64.h"
#else
#	include "UNIX_QueueHierarchyDeps_STUB.h"
#endif
