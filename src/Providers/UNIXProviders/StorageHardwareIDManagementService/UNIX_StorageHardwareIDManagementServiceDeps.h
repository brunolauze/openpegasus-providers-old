
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageHardwareIDManagementServiceDeps_TRU64.h"
#else
#	include "UNIX_StorageHardwareIDManagementServiceDeps_STUB.h"
#endif
