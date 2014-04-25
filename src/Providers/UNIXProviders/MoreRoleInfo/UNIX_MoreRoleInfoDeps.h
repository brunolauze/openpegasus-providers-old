
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MoreRoleInfoDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MoreRoleInfoDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MoreRoleInfoDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MoreRoleInfoDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MoreRoleInfoDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MoreRoleInfoDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MoreRoleInfoDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MoreRoleInfoDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MoreRoleInfoDeps_TRU64.h"
#else
#	include "UNIX_MoreRoleInfoDeps_STUB.h"
#endif
