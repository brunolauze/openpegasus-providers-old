
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UseOfMessageLogDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UseOfMessageLogDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UseOfMessageLogDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UseOfMessageLogDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UseOfMessageLogDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UseOfMessageLogDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UseOfMessageLogDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UseOfMessageLogDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UseOfMessageLogDeps_TRU64.h"
#else
#	include "UNIX_UseOfMessageLogDeps_STUB.h"
#endif
