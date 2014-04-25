
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OOBAlertServiceOnModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OOBAlertServiceOnModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OOBAlertServiceOnModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OOBAlertServiceOnModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OOBAlertServiceOnModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OOBAlertServiceOnModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OOBAlertServiceOnModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OOBAlertServiceOnModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OOBAlertServiceOnModemDeps_TRU64.h"
#else
#	include "UNIX_OOBAlertServiceOnModemDeps_STUB.h"
#endif
