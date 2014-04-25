
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_TRU64.h"
#else
#	include "UNIX_KeyBasedCredentialManagementServiceDeps_STUB.h"
#endif
