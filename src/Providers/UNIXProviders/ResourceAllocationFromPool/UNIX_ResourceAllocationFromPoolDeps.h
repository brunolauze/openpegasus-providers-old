
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResourceAllocationFromPoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResourceAllocationFromPoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResourceAllocationFromPoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResourceAllocationFromPoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResourceAllocationFromPoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResourceAllocationFromPoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResourceAllocationFromPoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResourceAllocationFromPoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResourceAllocationFromPoolDeps_TRU64.h"
#else
#	include "UNIX_ResourceAllocationFromPoolDeps_STUB.h"
#endif
