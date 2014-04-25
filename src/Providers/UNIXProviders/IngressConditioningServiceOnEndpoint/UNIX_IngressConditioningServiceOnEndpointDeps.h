
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_TRU64.h"
#else
#	include "UNIX_IngressConditioningServiceOnEndpointDeps_STUB.h"
#endif
