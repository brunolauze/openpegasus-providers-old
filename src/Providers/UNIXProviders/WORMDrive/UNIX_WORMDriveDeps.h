
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WORMDriveDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WORMDriveDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WORMDriveDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WORMDriveDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WORMDriveDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WORMDriveDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WORMDriveDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WORMDriveDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WORMDriveDeps_TRU64.h"
#else
#	include "UNIX_WORMDriveDeps_STUB.h"
#endif
