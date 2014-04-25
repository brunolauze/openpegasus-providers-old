
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyConditionInPolicyRuleDeps_TRU64.h"
#else
#	include "UNIX_PolicyConditionInPolicyRuleDeps_STUB.h"
#endif
