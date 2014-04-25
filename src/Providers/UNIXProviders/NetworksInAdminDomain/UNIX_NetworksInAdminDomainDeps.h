
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworksInAdminDomainDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworksInAdminDomainDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworksInAdminDomainDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworksInAdminDomainDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworksInAdminDomainDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworksInAdminDomainDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworksInAdminDomainDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworksInAdminDomainDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworksInAdminDomainDeps_TRU64.h"
#else
#	include "UNIX_NetworksInAdminDomainDeps_STUB.h"
#endif
