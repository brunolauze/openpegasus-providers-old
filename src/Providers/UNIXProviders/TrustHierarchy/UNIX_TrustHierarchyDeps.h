
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TrustHierarchyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TrustHierarchyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TrustHierarchyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TrustHierarchyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TrustHierarchyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TrustHierarchyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TrustHierarchyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TrustHierarchyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TrustHierarchyDeps_TRU64.h"
#else
#	include "UNIX_TrustHierarchyDeps_STUB.h"
#endif
