
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_TRU64.h"
#else
#	include "UNIX_PolicyActionInPolicyRepositoryDeps_STUB.h"
#endif
