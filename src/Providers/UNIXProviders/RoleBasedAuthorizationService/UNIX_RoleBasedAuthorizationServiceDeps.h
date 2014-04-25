
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoleBasedAuthorizationServiceDeps_TRU64.h"
#else
#	include "UNIX_RoleBasedAuthorizationServiceDeps_STUB.h"
#endif
