
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QoSConditioningSubServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QoSConditioningSubServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QoSConditioningSubServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QoSConditioningSubServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QoSConditioningSubServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QoSConditioningSubServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QoSConditioningSubServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QoSConditioningSubServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QoSConditioningSubServicePrivate_TRU64.h"
#else
#	include "UNIX_QoSConditioningSubServicePrivate_STUB.h"
#endif
