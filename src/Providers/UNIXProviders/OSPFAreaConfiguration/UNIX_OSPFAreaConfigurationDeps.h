
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSPFAreaConfigurationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSPFAreaConfigurationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSPFAreaConfigurationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSPFAreaConfigurationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSPFAreaConfigurationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSPFAreaConfigurationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSPFAreaConfigurationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSPFAreaConfigurationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSPFAreaConfigurationDeps_TRU64.h"
#else
#	include "UNIX_OSPFAreaConfigurationDeps_STUB.h"
#endif
