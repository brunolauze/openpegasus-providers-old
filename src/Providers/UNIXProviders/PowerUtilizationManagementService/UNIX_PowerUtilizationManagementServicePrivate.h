
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerUtilizationManagementServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerUtilizationManagementServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerUtilizationManagementServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerUtilizationManagementServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerUtilizationManagementServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerUtilizationManagementServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerUtilizationManagementServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerUtilizationManagementServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerUtilizationManagementServicePrivate_TRU64.h"
#else
#	include "UNIX_PowerUtilizationManagementServicePrivate_STUB.h"
#endif
