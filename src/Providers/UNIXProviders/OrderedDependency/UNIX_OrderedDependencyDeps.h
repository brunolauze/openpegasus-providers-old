
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrderedDependencyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrderedDependencyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrderedDependencyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrderedDependencyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrderedDependencyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrderedDependencyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrderedDependencyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrderedDependencyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrderedDependencyDeps_TRU64.h"
#else
#	include "UNIX_OrderedDependencyDeps_STUB.h"
#endif
