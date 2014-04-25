
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AFRelatedServicesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AFRelatedServicesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AFRelatedServicesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AFRelatedServicesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AFRelatedServicesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AFRelatedServicesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AFRelatedServicesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AFRelatedServicesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AFRelatedServicesPrivate_TRU64.h"
#else
#	include "UNIX_AFRelatedServicesPrivate_STUB.h"
#endif
