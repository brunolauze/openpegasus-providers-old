
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseAdministratorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseAdministratorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseAdministratorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseAdministratorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseAdministratorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseAdministratorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseAdministratorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseAdministratorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseAdministratorDeps_TRU64.h"
#else
#	include "UNIX_DatabaseAdministratorDeps_STUB.h"
#endif
