
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedResourcePoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedResourcePoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedResourcePoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedResourcePoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedResourcePoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedResourcePoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedResourcePoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedResourcePoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedResourcePoolDeps_TRU64.h"
#else
#	include "UNIX_HostedResourcePoolDeps_STUB.h"
#endif
