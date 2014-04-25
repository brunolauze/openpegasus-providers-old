
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPRoutingPolicyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPRoutingPolicyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPRoutingPolicyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPRoutingPolicyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPRoutingPolicyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPRoutingPolicyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPRoutingPolicyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPRoutingPolicyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPRoutingPolicyPrivate_TRU64.h"
#else
#	include "UNIX_BGPRoutingPolicyPrivate_STUB.h"
#endif
