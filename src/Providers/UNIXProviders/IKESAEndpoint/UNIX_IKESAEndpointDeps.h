
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKESAEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKESAEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKESAEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKESAEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKESAEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKESAEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKESAEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKESAEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKESAEndpointDeps_TRU64.h"
#else
#	include "UNIX_IKESAEndpointDeps_STUB.h"
#endif
