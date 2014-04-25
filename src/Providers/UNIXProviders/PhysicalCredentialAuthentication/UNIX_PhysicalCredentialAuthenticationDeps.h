
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalCredentialAuthenticationDeps_TRU64.h"
#else
#	include "UNIX_PhysicalCredentialAuthenticationDeps_STUB.h"
#endif
