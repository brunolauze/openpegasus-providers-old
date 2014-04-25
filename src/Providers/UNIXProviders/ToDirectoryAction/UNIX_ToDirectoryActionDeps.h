
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ToDirectoryActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ToDirectoryActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ToDirectoryActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ToDirectoryActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ToDirectoryActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ToDirectoryActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ToDirectoryActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ToDirectoryActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ToDirectoryActionDeps_TRU64.h"
#else
#	include "UNIX_ToDirectoryActionDeps_STUB.h"
#endif
