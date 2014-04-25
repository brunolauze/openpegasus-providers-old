
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiskSpaceCheckDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiskSpaceCheckDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiskSpaceCheckDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiskSpaceCheckDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiskSpaceCheckDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiskSpaceCheckDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiskSpaceCheckDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiskSpaceCheckDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiskSpaceCheckDeps_TRU64.h"
#else
#	include "UNIX_DiskSpaceCheckDeps_STUB.h"
#endif
