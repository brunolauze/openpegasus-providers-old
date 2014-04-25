
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPNetworkConnectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPNetworkConnectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPNetworkConnectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPNetworkConnectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPNetworkConnectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPNetworkConnectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPNetworkConnectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPNetworkConnectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPNetworkConnectionDeps_TRU64.h"
#else
#	include "UNIX_IPNetworkConnectionDeps_STUB.h"
#endif
