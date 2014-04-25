
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceProcessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceProcessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceProcessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceProcessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceProcessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceProcessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceProcessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceProcessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceProcessDeps_TRU64.h"
#else
#	include "UNIX_ServiceProcessDeps_STUB.h"
#endif
