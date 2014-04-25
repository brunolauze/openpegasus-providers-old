
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemConfigurationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemConfigurationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemConfigurationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemConfigurationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemConfigurationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemConfigurationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemConfigurationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemConfigurationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemConfigurationDeps_TRU64.h"
#else
#	include "UNIX_SystemConfigurationDeps_STUB.h"
#endif
