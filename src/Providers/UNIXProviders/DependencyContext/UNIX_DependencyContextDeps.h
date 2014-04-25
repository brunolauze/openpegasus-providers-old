
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DependencyContextDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DependencyContextDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DependencyContextDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DependencyContextDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DependencyContextDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DependencyContextDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DependencyContextDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DependencyContextDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DependencyContextDeps_TRU64.h"
#else
#	include "UNIX_DependencyContextDeps_STUB.h"
#endif
