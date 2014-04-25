
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AllocatedResourceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AllocatedResourceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AllocatedResourceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AllocatedResourceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AllocatedResourceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AllocatedResourceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AllocatedResourceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AllocatedResourceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AllocatedResourceDeps_TRU64.h"
#else
#	include "UNIX_AllocatedResourceDeps_STUB.h"
#endif
