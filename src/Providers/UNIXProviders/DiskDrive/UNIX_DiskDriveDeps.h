
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiskDriveDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiskDriveDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiskDriveDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiskDriveDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiskDriveDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiskDriveDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiskDriveDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiskDriveDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiskDriveDeps_TRU64.h"
#else
#	include "UNIX_DiskDriveDeps_STUB.h"
#endif
