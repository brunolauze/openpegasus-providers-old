
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ListsInRoutingPolicyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ListsInRoutingPolicyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ListsInRoutingPolicyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ListsInRoutingPolicyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ListsInRoutingPolicyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ListsInRoutingPolicyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ListsInRoutingPolicyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ListsInRoutingPolicyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ListsInRoutingPolicyDeps_TRU64.h"
#else
#	include "UNIX_ListsInRoutingPolicyDeps_STUB.h"
#endif
