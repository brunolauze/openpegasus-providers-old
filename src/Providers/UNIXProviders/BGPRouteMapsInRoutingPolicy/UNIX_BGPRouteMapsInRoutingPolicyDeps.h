
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_TRU64.h"
#else
#	include "UNIX_BGPRouteMapsInRoutingPolicyDeps_STUB.h"
#endif
