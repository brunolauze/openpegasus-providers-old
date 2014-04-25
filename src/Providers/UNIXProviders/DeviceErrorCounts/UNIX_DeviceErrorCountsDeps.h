
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceErrorCountsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceErrorCountsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceErrorCountsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceErrorCountsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceErrorCountsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceErrorCountsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceErrorCountsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceErrorCountsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceErrorCountsDeps_TRU64.h"
#else
#	include "UNIX_DeviceErrorCountsDeps_STUB.h"
#endif
