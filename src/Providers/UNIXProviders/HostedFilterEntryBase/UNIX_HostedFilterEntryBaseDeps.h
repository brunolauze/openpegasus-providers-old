
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedFilterEntryBaseDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedFilterEntryBaseDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedFilterEntryBaseDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedFilterEntryBaseDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedFilterEntryBaseDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedFilterEntryBaseDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedFilterEntryBaseDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedFilterEntryBaseDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedFilterEntryBaseDeps_TRU64.h"
#else
#	include "UNIX_HostedFilterEntryBaseDeps_STUB.h"
#endif
