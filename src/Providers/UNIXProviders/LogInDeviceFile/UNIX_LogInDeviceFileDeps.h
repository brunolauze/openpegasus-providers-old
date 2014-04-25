
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogInDeviceFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogInDeviceFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogInDeviceFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogInDeviceFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogInDeviceFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogInDeviceFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogInDeviceFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogInDeviceFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogInDeviceFileDeps_TRU64.h"
#else
#	include "UNIX_LogInDeviceFileDeps_STUB.h"
#endif
