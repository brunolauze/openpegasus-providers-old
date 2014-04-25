
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CopyFileActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CopyFileActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CopyFileActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CopyFileActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CopyFileActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CopyFileActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CopyFileActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CopyFileActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CopyFileActionDeps_TRU64.h"
#else
#	include "UNIX_CopyFileActionDeps_STUB.h"
#endif
