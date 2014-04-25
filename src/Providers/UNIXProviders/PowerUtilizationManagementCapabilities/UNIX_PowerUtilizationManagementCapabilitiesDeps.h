
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_PowerUtilizationManagementCapabilitiesDeps_STUB.h"
#endif
