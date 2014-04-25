
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemAdministratorRoleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemAdministratorRoleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemAdministratorRoleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemAdministratorRoleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemAdministratorRoleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemAdministratorRoleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemAdministratorRoleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemAdministratorRoleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemAdministratorRoleDeps_TRU64.h"
#else
#	include "UNIX_SystemAdministratorRoleDeps_STUB.h"
#endif
