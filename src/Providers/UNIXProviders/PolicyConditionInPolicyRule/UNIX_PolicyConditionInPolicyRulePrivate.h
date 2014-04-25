
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyConditionInPolicyRulePrivate_TRU64.h"
#else
#	include "UNIX_PolicyConditionInPolicyRulePrivate_STUB.h"
#endif
