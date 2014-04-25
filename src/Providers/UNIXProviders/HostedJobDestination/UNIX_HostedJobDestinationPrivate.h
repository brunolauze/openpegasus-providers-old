
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedJobDestinationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedJobDestinationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedJobDestinationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedJobDestinationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedJobDestinationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedJobDestinationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedJobDestinationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedJobDestinationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedJobDestinationPrivate_TRU64.h"
#else
#	include "UNIX_HostedJobDestinationPrivate_STUB.h"
#endif
