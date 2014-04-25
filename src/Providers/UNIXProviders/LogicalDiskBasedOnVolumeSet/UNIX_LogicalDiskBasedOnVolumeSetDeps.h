
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_TRU64.h"
#else
#	include "UNIX_LogicalDiskBasedOnVolumeSetDeps_STUB.h"
#endif
