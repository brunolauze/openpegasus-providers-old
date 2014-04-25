
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemoveDirectoryActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemoveDirectoryActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemoveDirectoryActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemoveDirectoryActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemoveDirectoryActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemoveDirectoryActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemoveDirectoryActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemoveDirectoryActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemoveDirectoryActionDeps_TRU64.h"
#else
#	include "UNIX_RemoveDirectoryActionDeps_STUB.h"
#endif
