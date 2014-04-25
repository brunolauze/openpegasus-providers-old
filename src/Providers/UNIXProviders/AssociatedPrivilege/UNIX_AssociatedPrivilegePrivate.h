
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedPrivilegePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedPrivilegePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedPrivilegePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedPrivilegePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedPrivilegePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedPrivilegePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedPrivilegePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedPrivilegePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedPrivilegePrivate_TRU64.h"
#else
#	include "UNIX_AssociatedPrivilegePrivate_STUB.h"
#endif
