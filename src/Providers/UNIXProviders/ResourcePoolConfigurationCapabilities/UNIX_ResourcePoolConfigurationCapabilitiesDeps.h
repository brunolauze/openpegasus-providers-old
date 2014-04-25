
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_ResourcePoolConfigurationCapabilitiesDeps_STUB.h"
#endif
