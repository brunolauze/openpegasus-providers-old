
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerDeps_TRU64.h"
#else
#	include "UNIX_ObjectManagerDeps_STUB.h"
#endif
