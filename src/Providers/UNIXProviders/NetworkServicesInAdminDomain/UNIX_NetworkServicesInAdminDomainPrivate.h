
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkServicesInAdminDomainPrivate_TRU64.h"
#else
#	include "UNIX_NetworkServicesInAdminDomainPrivate_STUB.h"
#endif
