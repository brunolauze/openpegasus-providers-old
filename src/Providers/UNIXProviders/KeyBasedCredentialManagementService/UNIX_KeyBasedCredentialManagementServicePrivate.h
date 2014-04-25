
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_TRU64.h"
#else
#	include "UNIX_KeyBasedCredentialManagementServicePrivate_STUB.h"
#endif
