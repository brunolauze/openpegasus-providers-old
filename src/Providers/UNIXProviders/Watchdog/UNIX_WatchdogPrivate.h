
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WatchdogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WatchdogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WatchdogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WatchdogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WatchdogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WatchdogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WatchdogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WatchdogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WatchdogPrivate_TRU64.h"
#else
#	include "UNIX_WatchdogPrivate_STUB.h"
#endif
