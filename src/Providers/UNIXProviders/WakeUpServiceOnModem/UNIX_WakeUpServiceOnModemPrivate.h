
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WakeUpServiceOnModemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WakeUpServiceOnModemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WakeUpServiceOnModemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WakeUpServiceOnModemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WakeUpServiceOnModemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WakeUpServiceOnModemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WakeUpServiceOnModemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WakeUpServiceOnModemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WakeUpServiceOnModemPrivate_TRU64.h"
#else
#	include "UNIX_WakeUpServiceOnModemPrivate_STUB.h"
#endif
