
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceErrorDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceErrorDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceErrorDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceErrorDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceErrorDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceErrorDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceErrorDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceErrorDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceErrorDataDeps_TRU64.h"
#else
#	include "UNIX_DeviceErrorDataDeps_STUB.h"
#endif
