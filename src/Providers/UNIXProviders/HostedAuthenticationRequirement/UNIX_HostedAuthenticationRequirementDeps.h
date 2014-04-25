
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HostedAuthenticationRequirementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HostedAuthenticationRequirementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HostedAuthenticationRequirementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HostedAuthenticationRequirementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HostedAuthenticationRequirementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HostedAuthenticationRequirementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HostedAuthenticationRequirementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HostedAuthenticationRequirementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HostedAuthenticationRequirementDeps_TRU64.h"
#else
#	include "UNIX_HostedAuthenticationRequirementDeps_STUB.h"
#endif
