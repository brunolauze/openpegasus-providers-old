
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NamespaceInManagerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NamespaceInManagerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NamespaceInManagerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NamespaceInManagerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NamespaceInManagerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NamespaceInManagerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NamespaceInManagerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NamespaceInManagerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NamespaceInManagerPrivate_TRU64.h"
#else
#	include "UNIX_NamespaceInManagerPrivate_STUB.h"
#endif
