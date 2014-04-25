
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LaunchInContextSAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LaunchInContextSAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LaunchInContextSAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LaunchInContextSAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LaunchInContextSAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LaunchInContextSAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LaunchInContextSAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LaunchInContextSAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LaunchInContextSAPDeps_TRU64.h"
#else
#	include "UNIX_LaunchInContextSAPDeps_STUB.h"
#endif
