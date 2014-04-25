
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OpaqueManagementDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OpaqueManagementDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OpaqueManagementDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OpaqueManagementDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OpaqueManagementDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OpaqueManagementDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OpaqueManagementDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OpaqueManagementDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OpaqueManagementDataDeps_TRU64.h"
#else
#	include "UNIX_OpaqueManagementDataDeps_STUB.h"
#endif
