
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AlarmDeviceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AlarmDeviceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AlarmDeviceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AlarmDeviceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AlarmDeviceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AlarmDeviceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AlarmDeviceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AlarmDeviceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AlarmDeviceDeps_TRU64.h"
#else
#	include "UNIX_AlarmDeviceDeps_STUB.h"
#endif
