
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EndpointInAreaDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EndpointInAreaDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EndpointInAreaDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EndpointInAreaDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EndpointInAreaDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EndpointInAreaDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EndpointInAreaDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EndpointInAreaDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EndpointInAreaDeps_TRU64.h"
#else
#	include "UNIX_EndpointInAreaDeps_STUB.h"
#endif
