
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_TRU64.h"
#else
#	include "UNIX_WakeUpServiceOnNetworkPortDeps_STUB.h"
#endif
