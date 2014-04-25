
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ChangerDeviceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ChangerDeviceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ChangerDeviceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ChangerDeviceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ChangerDeviceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ChangerDeviceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ChangerDeviceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ChangerDeviceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ChangerDeviceDeps_TRU64.h"
#else
#	include "UNIX_ChangerDeviceDeps_STUB.h"
#endif
