
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingProtocolDomainDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingProtocolDomainDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingProtocolDomainDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingProtocolDomainDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingProtocolDomainDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingProtocolDomainDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingProtocolDomainDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingProtocolDomainDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingProtocolDomainDeps_TRU64.h"
#else
#	include "UNIX_RoutingProtocolDomainDeps_STUB.h"
#endif
