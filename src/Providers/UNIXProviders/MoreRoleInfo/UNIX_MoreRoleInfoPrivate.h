
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MoreRoleInfoPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MoreRoleInfoPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MoreRoleInfoPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MoreRoleInfoPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MoreRoleInfoPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MoreRoleInfoPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MoreRoleInfoPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MoreRoleInfoPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MoreRoleInfoPrivate_TRU64.h"
#else
#	include "UNIX_MoreRoleInfoPrivate_STUB.h"
#endif
