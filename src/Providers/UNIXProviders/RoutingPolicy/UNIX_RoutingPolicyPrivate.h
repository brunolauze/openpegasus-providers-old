
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingPolicyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingPolicyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingPolicyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingPolicyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingPolicyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingPolicyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingPolicyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingPolicyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingPolicyPrivate_TRU64.h"
#else
#	include "UNIX_RoutingPolicyPrivate_STUB.h"
#endif
