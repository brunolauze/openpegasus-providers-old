
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FromDirectoryActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FromDirectoryActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FromDirectoryActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FromDirectoryActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FromDirectoryActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FromDirectoryActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FromDirectoryActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FromDirectoryActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FromDirectoryActionDeps_TRU64.h"
#else
#	include "UNIX_FromDirectoryActionDeps_STUB.h"
#endif
