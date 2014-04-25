
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InterLibraryPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InterLibraryPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InterLibraryPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InterLibraryPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InterLibraryPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InterLibraryPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InterLibraryPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InterLibraryPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InterLibraryPortDeps_TRU64.h"
#else
#	include "UNIX_InterLibraryPortDeps_STUB.h"
#endif
