
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerUtilizationManagementServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerUtilizationManagementServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerUtilizationManagementServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerUtilizationManagementServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerUtilizationManagementServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerUtilizationManagementServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerUtilizationManagementServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerUtilizationManagementServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerUtilizationManagementServiceDeps_TRU64.h"
#else
#	include "UNIX_PowerUtilizationManagementServiceDeps_STUB.h"
#endif
