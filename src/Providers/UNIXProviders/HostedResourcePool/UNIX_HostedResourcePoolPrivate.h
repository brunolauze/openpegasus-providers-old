
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedResourcePoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedResourcePoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedResourcePoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedResourcePoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedResourcePoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedResourcePoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedResourcePoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedResourcePoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedResourcePoolPrivate_TRU64.h"
#else
#	include "UNIX_HostedResourcePoolPrivate_STUB.h"
#endif
