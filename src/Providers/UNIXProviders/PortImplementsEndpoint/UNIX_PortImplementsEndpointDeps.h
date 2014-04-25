
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortImplementsEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortImplementsEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortImplementsEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortImplementsEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortImplementsEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortImplementsEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortImplementsEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortImplementsEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortImplementsEndpointDeps_TRU64.h"
#else
#	include "UNIX_PortImplementsEndpointDeps_STUB.h"
#endif
