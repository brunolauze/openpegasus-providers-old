
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ApplicationSystemDirectoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ApplicationSystemDirectoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ApplicationSystemDirectoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ApplicationSystemDirectoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ApplicationSystemDirectoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ApplicationSystemDirectoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ApplicationSystemDirectoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ApplicationSystemDirectoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ApplicationSystemDirectoryDeps_TRU64.h"
#else
#	include "UNIX_ApplicationSystemDirectoryDeps_STUB.h"
#endif
