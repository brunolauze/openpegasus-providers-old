
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReflectorClientServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReflectorClientServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReflectorClientServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReflectorClientServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReflectorClientServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReflectorClientServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReflectorClientServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReflectorClientServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReflectorClientServiceDeps_TRU64.h"
#else
#	include "UNIX_ReflectorClientServiceDeps_STUB.h"
#endif
