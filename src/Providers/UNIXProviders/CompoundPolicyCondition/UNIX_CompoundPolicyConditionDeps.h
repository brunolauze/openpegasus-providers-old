
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompoundPolicyConditionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompoundPolicyConditionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompoundPolicyConditionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompoundPolicyConditionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompoundPolicyConditionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompoundPolicyConditionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompoundPolicyConditionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompoundPolicyConditionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompoundPolicyConditionDeps_TRU64.h"
#else
#	include "UNIX_CompoundPolicyConditionDeps_STUB.h"
#endif
