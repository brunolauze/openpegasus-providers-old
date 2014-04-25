
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageHardwareIDManagementServicePrivate_TRU64.h"
#else
#	include "UNIX_StorageHardwareIDManagementServicePrivate_STUB.h"
#endif
