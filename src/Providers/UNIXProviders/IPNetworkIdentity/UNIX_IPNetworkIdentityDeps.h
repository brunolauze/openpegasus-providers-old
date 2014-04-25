
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPNetworkIdentityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPNetworkIdentityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPNetworkIdentityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPNetworkIdentityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPNetworkIdentityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPNetworkIdentityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPNetworkIdentityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPNetworkIdentityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPNetworkIdentityDeps_TRU64.h"
#else
#	include "UNIX_IPNetworkIdentityDeps_STUB.h"
#endif
