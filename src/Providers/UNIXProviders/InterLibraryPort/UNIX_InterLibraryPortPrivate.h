
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InterLibraryPortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InterLibraryPortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InterLibraryPortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InterLibraryPortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InterLibraryPortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InterLibraryPortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InterLibraryPortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InterLibraryPortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InterLibraryPortPrivate_TRU64.h"
#else
#	include "UNIX_InterLibraryPortPrivate_STUB.h"
#endif
