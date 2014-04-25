
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MessageLogDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MessageLogDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MessageLogDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MessageLogDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MessageLogDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MessageLogDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MessageLogDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MessageLogDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MessageLogDeps_TRU64.h"
#else
#	include "UNIX_MessageLogDeps_STUB.h"
#endif
