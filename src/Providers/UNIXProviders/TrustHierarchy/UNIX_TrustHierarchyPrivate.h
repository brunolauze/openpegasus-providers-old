
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TrustHierarchyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TrustHierarchyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TrustHierarchyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TrustHierarchyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TrustHierarchyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TrustHierarchyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TrustHierarchyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TrustHierarchyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TrustHierarchyPrivate_TRU64.h"
#else
#	include "UNIX_TrustHierarchyPrivate_STUB.h"
#endif
