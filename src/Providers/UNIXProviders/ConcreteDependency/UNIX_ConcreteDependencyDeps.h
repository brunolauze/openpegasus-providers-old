
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConcreteDependencyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConcreteDependencyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConcreteDependencyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConcreteDependencyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConcreteDependencyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConcreteDependencyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConcreteDependencyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConcreteDependencyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConcreteDependencyDeps_TRU64.h"
#else
#	include "UNIX_ConcreteDependencyDeps_STUB.h"
#endif
