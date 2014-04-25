
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VersionCompatibilityCheckDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VersionCompatibilityCheckDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VersionCompatibilityCheckDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VersionCompatibilityCheckDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VersionCompatibilityCheckDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VersionCompatibilityCheckDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VersionCompatibilityCheckDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VersionCompatibilityCheckDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VersionCompatibilityCheckDeps_TRU64.h"
#else
#	include "UNIX_VersionCompatibilityCheckDeps_STUB.h"
#endif
