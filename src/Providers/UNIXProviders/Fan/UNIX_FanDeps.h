
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FanDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FanDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FanDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FanDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FanDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FanDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FanDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FanDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FanDeps_TRU64.h"
#else
#	include "UNIX_FanDeps_STUB.h"
#endif
