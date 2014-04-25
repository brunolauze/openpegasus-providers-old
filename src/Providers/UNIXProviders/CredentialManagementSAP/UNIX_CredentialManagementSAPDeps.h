
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CredentialManagementSAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CredentialManagementSAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CredentialManagementSAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CredentialManagementSAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CredentialManagementSAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CredentialManagementSAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CredentialManagementSAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CredentialManagementSAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CredentialManagementSAPDeps_TRU64.h"
#else
#	include "UNIX_CredentialManagementSAPDeps_STUB.h"
#endif
