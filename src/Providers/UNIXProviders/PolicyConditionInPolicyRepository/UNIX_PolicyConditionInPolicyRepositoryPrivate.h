
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_TRU64.h"
#else
#	include "UNIX_PolicyConditionInPolicyRepositoryPrivate_STUB.h"
#endif
