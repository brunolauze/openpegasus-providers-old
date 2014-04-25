
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareInstallationServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareInstallationServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareInstallationServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareInstallationServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareInstallationServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareInstallationServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareInstallationServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareInstallationServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareInstallationServiceDeps_TRU64.h"
#else
#	include "UNIX_SoftwareInstallationServiceDeps_STUB.h"
#endif
