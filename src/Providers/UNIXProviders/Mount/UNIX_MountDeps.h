
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MountDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MountDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MountDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MountDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MountDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MountDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MountDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MountDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MountDeps_TRU64.h"
#else
#	include "UNIX_MountDeps_STUB.h"
#endif
