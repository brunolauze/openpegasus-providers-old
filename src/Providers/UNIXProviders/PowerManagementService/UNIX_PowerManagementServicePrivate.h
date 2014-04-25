
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerManagementServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerManagementServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerManagementServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerManagementServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerManagementServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerManagementServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerManagementServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerManagementServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerManagementServicePrivate_TRU64.h"
#else
#	include "UNIX_PowerManagementServicePrivate_STUB.h"
#endif
