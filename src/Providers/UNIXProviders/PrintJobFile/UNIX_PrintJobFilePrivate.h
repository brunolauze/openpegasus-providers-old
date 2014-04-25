
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintJobFilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintJobFilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintJobFilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintJobFilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintJobFilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintJobFilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintJobFilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintJobFilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintJobFilePrivate_TRU64.h"
#else
#	include "UNIX_PrintJobFilePrivate_STUB.h"
#endif
