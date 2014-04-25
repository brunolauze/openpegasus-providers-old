
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceUsesSecurityServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceUsesSecurityServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceUsesSecurityServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceUsesSecurityServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceUsesSecurityServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceUsesSecurityServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceUsesSecurityServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceUsesSecurityServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceUsesSecurityServiceDeps_TRU64.h"
#else
#	include "UNIX_ServiceUsesSecurityServiceDeps_STUB.h"
#endif
