
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointInLinkPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointInLinkPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointInLinkPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointInLinkPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointInLinkPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointInLinkPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointInLinkPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointInLinkPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointInLinkPrivate_TRU64.h"
#else
#	include "UNIX_EndpointInLinkPrivate_STUB.h"
#endif
