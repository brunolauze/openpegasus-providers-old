
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_TRU64.h"
#else
#	include "UNIX_LogicalDiskBasedOnVolumeSetPrivate_STUB.h"
#endif
