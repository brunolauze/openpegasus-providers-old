
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StorageLibraryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StorageLibraryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StorageLibraryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StorageLibraryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StorageLibraryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StorageLibraryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StorageLibraryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StorageLibraryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StorageLibraryDeps_TRU64.h"
#else
#	include "UNIX_StorageLibraryDeps_STUB.h"
#endif
