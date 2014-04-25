
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ConditioningServiceOnEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ConditioningServiceOnEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ConditioningServiceOnEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ConditioningServiceOnEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ConditioningServiceOnEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ConditioningServiceOnEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ConditioningServiceOnEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ConditioningServiceOnEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ConditioningServiceOnEndpointDeps_TRU64.h"
#else
#	include "UNIX_ConditioningServiceOnEndpointDeps_STUB.h"
#endif
