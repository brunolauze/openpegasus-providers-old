
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtectedExtentBasedOnDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtectedExtentBasedOnDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtectedExtentBasedOnDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtectedExtentBasedOnDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtectedExtentBasedOnDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtectedExtentBasedOnDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtectedExtentBasedOnDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtectedExtentBasedOnDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtectedExtentBasedOnDeps_TRU64.h"
#else
#	include "UNIX_ProtectedExtentBasedOnDeps_STUB.h"
#endif
