
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResourceAllocationFromPoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResourceAllocationFromPoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResourceAllocationFromPoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResourceAllocationFromPoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResourceAllocationFromPoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResourceAllocationFromPoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResourceAllocationFromPoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResourceAllocationFromPoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResourceAllocationFromPoolPrivate_TRU64.h"
#else
#	include "UNIX_ResourceAllocationFromPoolPrivate_STUB.h"
#endif
