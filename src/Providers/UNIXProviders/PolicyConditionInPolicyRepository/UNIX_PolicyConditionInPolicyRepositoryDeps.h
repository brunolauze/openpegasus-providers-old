
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_TRU64.h"
#else
#	include "UNIX_PolicyConditionInPolicyRepositoryDeps_STUB.h"
#endif
