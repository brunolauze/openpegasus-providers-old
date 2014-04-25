
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecTunnelActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecTunnelActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecTunnelActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecTunnelActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecTunnelActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecTunnelActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecTunnelActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecTunnelActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecTunnelActionDeps_TRU64.h"
#else
#	include "UNIX_IPsecTunnelActionDeps_STUB.h"
#endif
