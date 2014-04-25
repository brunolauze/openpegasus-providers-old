
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReflectorNonClientServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReflectorNonClientServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReflectorNonClientServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReflectorNonClientServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReflectorNonClientServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReflectorNonClientServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReflectorNonClientServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReflectorNonClientServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReflectorNonClientServiceDeps_TRU64.h"
#else
#	include "UNIX_ReflectorNonClientServiceDeps_STUB.h"
#endif
