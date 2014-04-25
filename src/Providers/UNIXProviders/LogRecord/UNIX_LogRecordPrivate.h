
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogRecordPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogRecordPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogRecordPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogRecordPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogRecordPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogRecordPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogRecordPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogRecordPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogRecordPrivate_TRU64.h"
#else
#	include "UNIX_LogRecordPrivate_STUB.h"
#endif
