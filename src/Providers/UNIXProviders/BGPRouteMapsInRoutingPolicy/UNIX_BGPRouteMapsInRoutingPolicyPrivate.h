
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_TRU64.h"
#else
#	include "UNIX_BGPRouteMapsInRoutingPolicyPrivate_STUB.h"
#endif
