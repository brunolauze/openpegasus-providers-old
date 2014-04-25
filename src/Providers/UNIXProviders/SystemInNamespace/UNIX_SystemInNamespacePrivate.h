
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemInNamespacePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemInNamespacePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemInNamespacePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemInNamespacePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemInNamespacePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemInNamespacePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemInNamespacePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemInNamespacePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemInNamespacePrivate_TRU64.h"
#else
#	include "UNIX_SystemInNamespacePrivate_STUB.h"
#endif
