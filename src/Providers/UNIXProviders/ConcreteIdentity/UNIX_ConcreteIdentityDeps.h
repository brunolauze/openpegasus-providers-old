
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConcreteIdentityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConcreteIdentityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConcreteIdentityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConcreteIdentityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConcreteIdentityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConcreteIdentityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConcreteIdentityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConcreteIdentityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConcreteIdentityDeps_TRU64.h"
#else
#	include "UNIX_ConcreteIdentityDeps_STUB.h"
#endif
