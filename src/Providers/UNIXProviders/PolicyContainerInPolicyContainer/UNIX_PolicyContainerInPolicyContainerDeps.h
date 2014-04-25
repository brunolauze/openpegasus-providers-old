
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyContainerInPolicyContainerDeps_TRU64.h"
#else
#	include "UNIX_PolicyContainerInPolicyContainerDeps_STUB.h"
#endif
