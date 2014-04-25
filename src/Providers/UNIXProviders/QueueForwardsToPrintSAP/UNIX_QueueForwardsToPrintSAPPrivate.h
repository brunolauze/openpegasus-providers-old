
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueForwardsToPrintSAPPrivate_TRU64.h"
#else
#	include "UNIX_QueueForwardsToPrintSAPPrivate_STUB.h"
#endif
