
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueForwardsToPrintSAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueForwardsToPrintSAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueForwardsToPrintSAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueForwardsToPrintSAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueForwardsToPrintSAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueForwardsToPrintSAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueForwardsToPrintSAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueForwardsToPrintSAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueForwardsToPrintSAPDeps_TRU64.h"
#else
#	include "UNIX_QueueForwardsToPrintSAPDeps_STUB.h"
#endif
