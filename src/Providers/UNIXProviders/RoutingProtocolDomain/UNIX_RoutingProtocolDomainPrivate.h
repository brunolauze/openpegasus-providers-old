
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingProtocolDomainPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingProtocolDomainPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingProtocolDomainPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingProtocolDomainPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingProtocolDomainPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingProtocolDomainPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingProtocolDomainPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingProtocolDomainPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingProtocolDomainPrivate_TRU64.h"
#else
#	include "UNIX_RoutingProtocolDomainPrivate_STUB.h"
#endif
