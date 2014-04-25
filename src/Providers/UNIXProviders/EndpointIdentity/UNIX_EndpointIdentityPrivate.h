
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointIdentityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointIdentityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointIdentityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointIdentityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointIdentityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointIdentityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointIdentityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointIdentityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointIdentityPrivate_TRU64.h"
#else
#	include "UNIX_EndpointIdentityPrivate_STUB.h"
#endif
