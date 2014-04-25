
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceSoftwareDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceSoftwareDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceSoftwareDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceSoftwareDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceSoftwareDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceSoftwareDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceSoftwareDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceSoftwareDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceSoftwareDeps_TRU64.h"
#else
#	include "UNIX_DeviceSoftwareDeps_STUB.h"
#endif
