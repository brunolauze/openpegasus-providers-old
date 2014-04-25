
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConcreteComponentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConcreteComponentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConcreteComponentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConcreteComponentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConcreteComponentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConcreteComponentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConcreteComponentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConcreteComponentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConcreteComponentDeps_TRU64.h"
#else
#	include "UNIX_ConcreteComponentDeps_STUB.h"
#endif
