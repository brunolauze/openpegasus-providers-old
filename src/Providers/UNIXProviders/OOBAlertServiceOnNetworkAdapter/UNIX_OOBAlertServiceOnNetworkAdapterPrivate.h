
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_TRU64.h"
#else
#	include "UNIX_OOBAlertServiceOnNetworkAdapterPrivate_STUB.h"
#endif
