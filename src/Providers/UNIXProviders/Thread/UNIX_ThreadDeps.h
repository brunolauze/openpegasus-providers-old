
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ThreadDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ThreadDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ThreadDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ThreadDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ThreadDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ThreadDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ThreadDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ThreadDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ThreadDeps_TRU64.h"
#else
#	include "UNIX_ThreadDeps_STUB.h"
#endif
