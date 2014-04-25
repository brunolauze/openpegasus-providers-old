
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerAdapterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerAdapterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerAdapterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerAdapterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerAdapterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerAdapterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerAdapterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerAdapterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerAdapterDeps_TRU64.h"
#else
#	include "UNIX_ObjectManagerAdapterDeps_STUB.h"
#endif
