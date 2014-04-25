
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemAdministratorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemAdministratorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemAdministratorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemAdministratorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemAdministratorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemAdministratorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemAdministratorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemAdministratorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemAdministratorDeps_TRU64.h"
#else
#	include "UNIX_SystemAdministratorDeps_STUB.h"
#endif
