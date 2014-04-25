
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RolePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RolePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RolePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RolePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RolePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RolePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RolePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RolePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RolePrivate_TRU64.h"
#else
#	include "UNIX_RolePrivate_STUB.h"
#endif
