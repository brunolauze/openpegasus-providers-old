
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CompoundPolicyConditionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CompoundPolicyConditionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CompoundPolicyConditionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CompoundPolicyConditionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CompoundPolicyConditionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CompoundPolicyConditionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CompoundPolicyConditionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CompoundPolicyConditionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CompoundPolicyConditionPrivate_TRU64.h"
#else
#	include "UNIX_CompoundPolicyConditionPrivate_STUB.h"
#endif
