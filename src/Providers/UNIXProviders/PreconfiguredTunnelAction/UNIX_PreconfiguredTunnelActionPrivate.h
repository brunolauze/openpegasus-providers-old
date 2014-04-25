
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreconfiguredTunnelActionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreconfiguredTunnelActionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreconfiguredTunnelActionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreconfiguredTunnelActionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreconfiguredTunnelActionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreconfiguredTunnelActionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreconfiguredTunnelActionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreconfiguredTunnelActionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreconfiguredTunnelActionPrivate_TRU64.h"
#else
#	include "UNIX_PreconfiguredTunnelActionPrivate_STUB.h"
#endif
