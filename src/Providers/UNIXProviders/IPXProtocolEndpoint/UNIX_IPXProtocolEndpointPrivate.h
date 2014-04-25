
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPXProtocolEndpointPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPXProtocolEndpointPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPXProtocolEndpointPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPXProtocolEndpointPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPXProtocolEndpointPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPXProtocolEndpointPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPXProtocolEndpointPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPXProtocolEndpointPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPXProtocolEndpointPrivate_TRU64.h"
#else
#	include "UNIX_IPXProtocolEndpointPrivate_STUB.h"
#endif
