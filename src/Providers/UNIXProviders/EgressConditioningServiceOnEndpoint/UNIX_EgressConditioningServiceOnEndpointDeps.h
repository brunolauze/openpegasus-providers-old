
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_TRU64.h"
#else
#	include "UNIX_EgressConditioningServiceOnEndpointDeps_STUB.h"
#endif
