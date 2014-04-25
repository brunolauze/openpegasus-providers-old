
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceErrorCountsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceErrorCountsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceErrorCountsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceErrorCountsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceErrorCountsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceErrorCountsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceErrorCountsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceErrorCountsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceErrorCountsPrivate_TRU64.h"
#else
#	include "UNIX_DeviceErrorCountsPrivate_STUB.h"
#endif
