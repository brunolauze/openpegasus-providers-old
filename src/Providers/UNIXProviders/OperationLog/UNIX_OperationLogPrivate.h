
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OperationLogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OperationLogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OperationLogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OperationLogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OperationLogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OperationLogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OperationLogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OperationLogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OperationLogPrivate_TRU64.h"
#else
#	include "UNIX_OperationLogPrivate_STUB.h"
#endif
