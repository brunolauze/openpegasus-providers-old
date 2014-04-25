
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyActionInPolicyRuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyActionInPolicyRuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyActionInPolicyRuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyActionInPolicyRuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyActionInPolicyRuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyActionInPolicyRuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyActionInPolicyRuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyActionInPolicyRuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyActionInPolicyRuleDeps_TRU64.h"
#else
#	include "UNIX_PolicyActionInPolicyRuleDeps_STUB.h"
#endif
