
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceErrorDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceErrorDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceErrorDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceErrorDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceErrorDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceErrorDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceErrorDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceErrorDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceErrorDataPrivate_TRU64.h"
#else
#	include "UNIX_DeviceErrorDataPrivate_STUB.h"
#endif
