
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConfigurationCapacityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConfigurationCapacityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConfigurationCapacityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConfigurationCapacityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConfigurationCapacityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConfigurationCapacityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConfigurationCapacityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConfigurationCapacityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConfigurationCapacityDeps_TRU64.h"
#else
#	include "UNIX_ConfigurationCapacityDeps_STUB.h"
#endif
