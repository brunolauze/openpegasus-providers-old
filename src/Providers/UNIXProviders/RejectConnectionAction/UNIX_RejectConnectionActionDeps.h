
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RejectConnectionActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RejectConnectionActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RejectConnectionActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RejectConnectionActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RejectConnectionActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RejectConnectionActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RejectConnectionActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RejectConnectionActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RejectConnectionActionDeps_TRU64.h"
#else
#	include "UNIX_RejectConnectionActionDeps_STUB.h"
#endif
