
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ApplicationSystemDependencyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ApplicationSystemDependencyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ApplicationSystemDependencyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ApplicationSystemDependencyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ApplicationSystemDependencyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ApplicationSystemDependencyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ApplicationSystemDependencyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ApplicationSystemDependencyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ApplicationSystemDependencyPrivate_TRU64.h"
#else
#	include "UNIX_ApplicationSystemDependencyPrivate_STUB.h"
#endif
