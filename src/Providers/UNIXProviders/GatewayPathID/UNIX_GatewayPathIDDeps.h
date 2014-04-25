
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_GatewayPathIDDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_GatewayPathIDDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_GatewayPathIDDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_GatewayPathIDDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_GatewayPathIDDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_GatewayPathIDDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_GatewayPathIDDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_GatewayPathIDDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_GatewayPathIDDeps_TRU64.h"
#else
#	include "UNIX_GatewayPathIDDeps_STUB.h"
#endif
