
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_TRU64.h"
#else
#	include "UNIX_OOBAlertServiceOnNetworkPortDeps_STUB.h"
#endif
