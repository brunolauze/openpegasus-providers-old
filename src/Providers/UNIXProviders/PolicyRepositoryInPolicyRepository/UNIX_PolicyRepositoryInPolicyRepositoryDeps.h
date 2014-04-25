
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_TRU64.h"
#else
#	include "UNIX_PolicyRepositoryInPolicyRepositoryDeps_STUB.h"
#endif
