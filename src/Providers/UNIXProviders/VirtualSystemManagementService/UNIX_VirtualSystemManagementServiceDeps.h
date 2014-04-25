
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VirtualSystemManagementServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VirtualSystemManagementServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VirtualSystemManagementServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VirtualSystemManagementServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VirtualSystemManagementServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VirtualSystemManagementServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VirtualSystemManagementServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VirtualSystemManagementServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VirtualSystemManagementServiceDeps_TRU64.h"
#else
#	include "UNIX_VirtualSystemManagementServiceDeps_STUB.h"
#endif
