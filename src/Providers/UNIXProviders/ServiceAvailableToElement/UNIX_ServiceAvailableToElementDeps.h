
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceAvailableToElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceAvailableToElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceAvailableToElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceAvailableToElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceAvailableToElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceAvailableToElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceAvailableToElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceAvailableToElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceAvailableToElementDeps_TRU64.h"
#else
#	include "UNIX_ServiceAvailableToElementDeps_STUB.h"
#endif
