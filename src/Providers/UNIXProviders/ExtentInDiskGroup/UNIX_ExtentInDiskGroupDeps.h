
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ExtentInDiskGroupDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ExtentInDiskGroupDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ExtentInDiskGroupDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ExtentInDiskGroupDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ExtentInDiskGroupDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ExtentInDiskGroupDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ExtentInDiskGroupDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ExtentInDiskGroupDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ExtentInDiskGroupDeps_TRU64.h"
#else
#	include "UNIX_ExtentInDiskGroupDeps_STUB.h"
#endif
