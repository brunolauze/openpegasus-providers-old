
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_TRU64.h"
#else
#	include "UNIX_PhysicalCredentialAuthenticationPrivate_STUB.h"
#endif
