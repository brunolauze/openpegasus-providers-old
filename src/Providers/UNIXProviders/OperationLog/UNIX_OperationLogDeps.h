
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OperationLogDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OperationLogDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OperationLogDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OperationLogDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OperationLogDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OperationLogDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OperationLogDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OperationLogDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OperationLogDeps_TRU64.h"
#else
#	include "UNIX_OperationLogDeps_STUB.h"
#endif
