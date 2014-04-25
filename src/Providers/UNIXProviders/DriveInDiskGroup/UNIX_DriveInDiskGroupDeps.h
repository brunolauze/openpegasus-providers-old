
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DriveInDiskGroupDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DriveInDiskGroupDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DriveInDiskGroupDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DriveInDiskGroupDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DriveInDiskGroupDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DriveInDiskGroupDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DriveInDiskGroupDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DriveInDiskGroupDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DriveInDiskGroupDeps_TRU64.h"
#else
#	include "UNIX_DriveInDiskGroupDeps_STUB.h"
#endif
