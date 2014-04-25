
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemoveFileActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemoveFileActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemoveFileActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemoveFileActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemoveFileActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemoveFileActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemoveFileActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemoveFileActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemoveFileActionDeps_TRU64.h"
#else
#	include "UNIX_RemoveFileActionDeps_STUB.h"
#endif
