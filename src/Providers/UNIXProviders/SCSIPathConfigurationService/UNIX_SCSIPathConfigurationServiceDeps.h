
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SCSIPathConfigurationServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SCSIPathConfigurationServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SCSIPathConfigurationServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SCSIPathConfigurationServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SCSIPathConfigurationServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SCSIPathConfigurationServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SCSIPathConfigurationServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SCSIPathConfigurationServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SCSIPathConfigurationServiceDeps_TRU64.h"
#else
#	include "UNIX_SCSIPathConfigurationServiceDeps_STUB.h"
#endif
