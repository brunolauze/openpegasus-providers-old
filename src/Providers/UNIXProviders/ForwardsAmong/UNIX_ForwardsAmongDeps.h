
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ForwardsAmongDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ForwardsAmongDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ForwardsAmongDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ForwardsAmongDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ForwardsAmongDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ForwardsAmongDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ForwardsAmongDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ForwardsAmongDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ForwardsAmongDeps_TRU64.h"
#else
#	include "UNIX_ForwardsAmongDeps_STUB.h"
#endif
