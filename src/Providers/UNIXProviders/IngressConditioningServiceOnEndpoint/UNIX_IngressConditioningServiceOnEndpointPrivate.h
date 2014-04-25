
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_TRU64.h"
#else
#	include "UNIX_IngressConditioningServiceOnEndpointPrivate_STUB.h"
#endif
