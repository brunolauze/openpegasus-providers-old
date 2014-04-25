
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DirectoryContainsFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DirectoryContainsFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DirectoryContainsFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DirectoryContainsFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DirectoryContainsFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DirectoryContainsFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DirectoryContainsFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DirectoryContainsFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DirectoryContainsFileDeps_TRU64.h"
#else
#	include "UNIX_DirectoryContainsFileDeps_STUB.h"
#endif
