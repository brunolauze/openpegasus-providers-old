
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ListsInRoutingPolicyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ListsInRoutingPolicyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ListsInRoutingPolicyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ListsInRoutingPolicyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ListsInRoutingPolicyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ListsInRoutingPolicyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ListsInRoutingPolicyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ListsInRoutingPolicyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ListsInRoutingPolicyPrivate_TRU64.h"
#else
#	include "UNIX_ListsInRoutingPolicyPrivate_STUB.h"
#endif
