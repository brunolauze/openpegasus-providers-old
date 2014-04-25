
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PointingDeviceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PointingDeviceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PointingDeviceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PointingDeviceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PointingDeviceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PointingDeviceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PointingDeviceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PointingDeviceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PointingDeviceDeps_TRU64.h"
#else
#	include "UNIX_PointingDeviceDeps_STUB.h"
#endif
