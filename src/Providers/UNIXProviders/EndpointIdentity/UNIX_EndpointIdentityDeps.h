
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointIdentityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointIdentityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointIdentityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointIdentityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointIdentityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointIdentityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointIdentityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointIdentityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointIdentityDeps_TRU64.h"
#else
#	include "UNIX_EndpointIdentityDeps_STUB.h"
#endif
