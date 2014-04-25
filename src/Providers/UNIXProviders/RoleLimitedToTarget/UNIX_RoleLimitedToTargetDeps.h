
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoleLimitedToTargetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoleLimitedToTargetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoleLimitedToTargetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoleLimitedToTargetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoleLimitedToTargetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoleLimitedToTargetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoleLimitedToTargetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoleLimitedToTargetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoleLimitedToTargetDeps_TRU64.h"
#else
#	include "UNIX_RoleLimitedToTargetDeps_STUB.h"
#endif
