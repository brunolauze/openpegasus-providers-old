
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ApplicationSystemHierarchyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ApplicationSystemHierarchyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ApplicationSystemHierarchyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ApplicationSystemHierarchyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ApplicationSystemHierarchyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ApplicationSystemHierarchyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ApplicationSystemHierarchyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ApplicationSystemHierarchyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ApplicationSystemHierarchyPrivate_TRU64.h"
#else
#	include "UNIX_ApplicationSystemHierarchyPrivate_STUB.h"
#endif
