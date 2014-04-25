
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreambleFilterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreambleFilterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreambleFilterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreambleFilterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreambleFilterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreambleFilterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreambleFilterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreambleFilterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreambleFilterDeps_TRU64.h"
#else
#	include "UNIX_PreambleFilterDeps_STUB.h"
#endif
