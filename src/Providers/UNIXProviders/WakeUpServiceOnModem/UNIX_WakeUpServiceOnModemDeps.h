
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WakeUpServiceOnModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WakeUpServiceOnModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WakeUpServiceOnModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WakeUpServiceOnModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WakeUpServiceOnModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WakeUpServiceOnModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WakeUpServiceOnModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WakeUpServiceOnModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WakeUpServiceOnModemDeps_TRU64.h"
#else
#	include "UNIX_WakeUpServiceOnModemDeps_STUB.h"
#endif
