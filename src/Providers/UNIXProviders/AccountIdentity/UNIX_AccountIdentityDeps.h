
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AccountIdentityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AccountIdentityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AccountIdentityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AccountIdentityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AccountIdentityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AccountIdentityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AccountIdentityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AccountIdentityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AccountIdentityDeps_TRU64.h"
#else
#	include "UNIX_AccountIdentityDeps_STUB.h"
#endif
