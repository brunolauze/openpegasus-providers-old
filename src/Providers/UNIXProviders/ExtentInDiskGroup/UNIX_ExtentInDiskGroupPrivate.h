
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExtentInDiskGroupPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExtentInDiskGroupPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExtentInDiskGroupPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExtentInDiskGroupPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExtentInDiskGroupPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExtentInDiskGroupPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExtentInDiskGroupPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExtentInDiskGroupPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExtentInDiskGroupPrivate_TRU64.h"
#else
#	include "UNIX_ExtentInDiskGroupPrivate_STUB.h"
#endif
