
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedAuthenticationRequirementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedAuthenticationRequirementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedAuthenticationRequirementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedAuthenticationRequirementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedAuthenticationRequirementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedAuthenticationRequirementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedAuthenticationRequirementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedAuthenticationRequirementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedAuthenticationRequirementPrivate_TRU64.h"
#else
#	include "UNIX_HostedAuthenticationRequirementPrivate_STUB.h"
#endif
