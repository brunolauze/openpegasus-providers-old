
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DisketteDrivePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DisketteDrivePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DisketteDrivePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DisketteDrivePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DisketteDrivePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DisketteDrivePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DisketteDrivePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DisketteDrivePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DisketteDrivePrivate_TRU64.h"
#else
#	include "UNIX_DisketteDrivePrivate_STUB.h"
#endif
