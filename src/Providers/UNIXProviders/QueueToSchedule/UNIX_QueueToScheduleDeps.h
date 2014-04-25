
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_QueueToScheduleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_QueueToScheduleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_QueueToScheduleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_QueueToScheduleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_QueueToScheduleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_QueueToScheduleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_QueueToScheduleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_QueueToScheduleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_QueueToScheduleDeps_TRU64.h"
#else
#	include "UNIX_QueueToScheduleDeps_STUB.h"
#endif
