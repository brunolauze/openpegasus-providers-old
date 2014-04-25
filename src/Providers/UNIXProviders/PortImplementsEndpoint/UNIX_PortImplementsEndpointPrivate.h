
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortImplementsEndpointPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortImplementsEndpointPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortImplementsEndpointPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortImplementsEndpointPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortImplementsEndpointPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortImplementsEndpointPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortImplementsEndpointPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortImplementsEndpointPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortImplementsEndpointPrivate_TRU64.h"
#else
#	include "UNIX_PortImplementsEndpointPrivate_STUB.h"
#endif
