
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_GatewayPathIDPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_GatewayPathIDPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_GatewayPathIDPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_GatewayPathIDPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_GatewayPathIDPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_GatewayPathIDPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_GatewayPathIDPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_GatewayPathIDPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_GatewayPathIDPrivate_TRU64.h"
#else
#	include "UNIX_GatewayPathIDPrivate_STUB.h"
#endif
