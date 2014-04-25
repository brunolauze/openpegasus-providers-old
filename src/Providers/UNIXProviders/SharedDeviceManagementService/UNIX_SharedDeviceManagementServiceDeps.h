
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SharedDeviceManagementServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SharedDeviceManagementServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SharedDeviceManagementServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SharedDeviceManagementServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SharedDeviceManagementServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SharedDeviceManagementServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SharedDeviceManagementServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SharedDeviceManagementServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SharedDeviceManagementServiceDeps_TRU64.h"
#else
#	include "UNIX_SharedDeviceManagementServiceDeps_STUB.h"
#endif
