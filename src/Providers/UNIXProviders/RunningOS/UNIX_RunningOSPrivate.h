
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RunningOSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RunningOSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RunningOSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RunningOSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RunningOSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RunningOSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RunningOSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RunningOSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RunningOSPrivate_TRU64.h"
#else
#	include "UNIX_RunningOSPrivate_STUB.h"
#endif
