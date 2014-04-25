
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingProtocolDomainInASDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingProtocolDomainInASDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingProtocolDomainInASDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingProtocolDomainInASDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingProtocolDomainInASDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingProtocolDomainInASDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingProtocolDomainInASDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingProtocolDomainInASDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingProtocolDomainInASDeps_TRU64.h"
#else
#	include "UNIX_RoutingProtocolDomainInASDeps_STUB.h"
#endif
