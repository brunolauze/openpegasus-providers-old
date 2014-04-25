
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogicalDiskPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogicalDiskPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogicalDiskPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogicalDiskPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogicalDiskPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogicalDiskPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogicalDiskPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogicalDiskPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogicalDiskPrivate_TRU64.h"
#else
#	include "UNIX_LogicalDiskPrivate_STUB.h"
#endif
