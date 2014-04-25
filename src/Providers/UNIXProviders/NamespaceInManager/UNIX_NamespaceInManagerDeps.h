
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NamespaceInManagerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NamespaceInManagerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NamespaceInManagerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NamespaceInManagerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NamespaceInManagerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NamespaceInManagerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NamespaceInManagerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NamespaceInManagerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NamespaceInManagerDeps_TRU64.h"
#else
#	include "UNIX_NamespaceInManagerDeps_STUB.h"
#endif
