
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyConditionInPolicyConditionDeps_TRU64.h"
#else
#	include "UNIX_PolicyConditionInPolicyConditionDeps_STUB.h"
#endif
