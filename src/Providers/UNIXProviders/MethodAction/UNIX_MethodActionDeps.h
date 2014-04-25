
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodActionDeps_TRU64.h"
#else
#	include "UNIX_MethodActionDeps_STUB.h"
#endif
