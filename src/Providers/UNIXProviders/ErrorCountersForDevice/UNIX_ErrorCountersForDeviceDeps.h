
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ErrorCountersForDeviceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ErrorCountersForDeviceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ErrorCountersForDeviceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ErrorCountersForDeviceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ErrorCountersForDeviceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ErrorCountersForDeviceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ErrorCountersForDeviceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ErrorCountersForDeviceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ErrorCountersForDeviceDeps_TRU64.h"
#else
#	include "UNIX_ErrorCountersForDeviceDeps_STUB.h"
#endif
