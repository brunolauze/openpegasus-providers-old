
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointInLinkDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointInLinkDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointInLinkDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointInLinkDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointInLinkDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointInLinkDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointInLinkDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointInLinkDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointInLinkDeps_TRU64.h"
#else
#	include "UNIX_EndpointInLinkDeps_STUB.h"
#endif
