
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiskGroupPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiskGroupPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiskGroupPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiskGroupPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiskGroupPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiskGroupPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiskGroupPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiskGroupPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiskGroupPrivate_TRU64.h"
#else
#	include "UNIX_DiskGroupPrivate_STUB.h"
#endif
