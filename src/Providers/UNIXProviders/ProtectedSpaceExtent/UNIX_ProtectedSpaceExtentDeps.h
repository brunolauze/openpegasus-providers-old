
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProtectedSpaceExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProtectedSpaceExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProtectedSpaceExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProtectedSpaceExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProtectedSpaceExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProtectedSpaceExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProtectedSpaceExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProtectedSpaceExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProtectedSpaceExtentDeps_TRU64.h"
#else
#	include "UNIX_ProtectedSpaceExtentDeps_STUB.h"
#endif
