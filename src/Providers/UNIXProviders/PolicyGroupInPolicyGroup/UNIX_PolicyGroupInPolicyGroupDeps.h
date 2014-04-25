
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyGroupInPolicyGroupDeps_TRU64.h"
#else
#	include "UNIX_PolicyGroupInPolicyGroupDeps_STUB.h"
#endif
