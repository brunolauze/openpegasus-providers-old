
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompoundPolicyActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompoundPolicyActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompoundPolicyActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompoundPolicyActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompoundPolicyActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompoundPolicyActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompoundPolicyActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompoundPolicyActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompoundPolicyActionDeps_TRU64.h"
#else
#	include "UNIX_CompoundPolicyActionDeps_STUB.h"
#endif
