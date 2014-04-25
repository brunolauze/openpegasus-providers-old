
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OpaqueManagementDataServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OpaqueManagementDataServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OpaqueManagementDataServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OpaqueManagementDataServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OpaqueManagementDataServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OpaqueManagementDataServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OpaqueManagementDataServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OpaqueManagementDataServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OpaqueManagementDataServicePrivate_TRU64.h"
#else
#	include "UNIX_OpaqueManagementDataServicePrivate_STUB.h"
#endif
