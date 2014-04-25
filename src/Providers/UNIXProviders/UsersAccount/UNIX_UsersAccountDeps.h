
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UsersAccountDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UsersAccountDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UsersAccountDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UsersAccountDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UsersAccountDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UsersAccountDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UsersAccountDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UsersAccountDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UsersAccountDeps_TRU64.h"
#else
#	include "UNIX_UsersAccountDeps_STUB.h"
#endif
