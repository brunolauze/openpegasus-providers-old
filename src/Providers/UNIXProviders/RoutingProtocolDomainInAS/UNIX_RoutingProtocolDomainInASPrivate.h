
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingProtocolDomainInASPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingProtocolDomainInASPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingProtocolDomainInASPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingProtocolDomainInASPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingProtocolDomainInASPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingProtocolDomainInASPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingProtocolDomainInASPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingProtocolDomainInASPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingProtocolDomainInASPrivate_TRU64.h"
#else
#	include "UNIX_RoutingProtocolDomainInASPrivate_STUB.h"
#endif
