
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedAdminDistancePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedAdminDistancePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedAdminDistancePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedAdminDistancePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedAdminDistancePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedAdminDistancePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedAdminDistancePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedAdminDistancePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedAdminDistancePrivate_TRU64.h"
#else
#	include "UNIX_HostedAdminDistancePrivate_STUB.h"
#endif
