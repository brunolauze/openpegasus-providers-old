
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccountMapsToAccountDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccountMapsToAccountDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccountMapsToAccountDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccountMapsToAccountDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccountMapsToAccountDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccountMapsToAccountDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccountMapsToAccountDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccountMapsToAccountDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccountMapsToAccountDeps_TRU64.h"
#else
#	include "UNIX_AccountMapsToAccountDeps_STUB.h"
#endif
