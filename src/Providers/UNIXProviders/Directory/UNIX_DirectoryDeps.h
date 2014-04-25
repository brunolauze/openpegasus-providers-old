
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DirectoryDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DirectoryDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DirectoryDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DirectoryDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DirectoryDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DirectoryDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DirectoryDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DirectoryDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DirectoryDeps_TRU64.h"
#else
#	include "UNIX_DirectoryDeps_STUB.h"
#endif
