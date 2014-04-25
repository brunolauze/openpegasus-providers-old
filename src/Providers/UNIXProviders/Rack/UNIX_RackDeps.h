
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RackDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RackDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RackDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RackDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RackDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RackDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RackDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RackDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RackDeps_TRU64.h"
#else
#	include "UNIX_RackDeps_STUB.h"
#endif
