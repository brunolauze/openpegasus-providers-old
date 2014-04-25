
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccountDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccountDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccountDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccountDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccountDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccountDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccountDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccountDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccountDeps_TRU64.h"
#else
#	include "UNIX_AccountDeps_STUB.h"
#endif
