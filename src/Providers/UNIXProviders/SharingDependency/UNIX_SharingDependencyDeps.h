
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharingDependencyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharingDependencyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharingDependencyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharingDependencyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharingDependencyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharingDependencyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharingDependencyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharingDependencyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharingDependencyDeps_TRU64.h"
#else
#	include "UNIX_SharingDependencyDeps_STUB.h"
#endif
