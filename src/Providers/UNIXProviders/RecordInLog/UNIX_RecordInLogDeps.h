
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RecordInLogDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RecordInLogDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RecordInLogDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RecordInLogDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RecordInLogDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RecordInLogDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RecordInLogDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RecordInLogDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RecordInLogDeps_TRU64.h"
#else
#	include "UNIX_RecordInLogDeps_STUB.h"
#endif
