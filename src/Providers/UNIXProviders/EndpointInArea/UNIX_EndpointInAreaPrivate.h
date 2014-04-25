
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointInAreaPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointInAreaPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointInAreaPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointInAreaPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointInAreaPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointInAreaPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointInAreaPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointInAreaPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointInAreaPrivate_TRU64.h"
#else
#	include "UNIX_EndpointInAreaPrivate_STUB.h"
#endif
