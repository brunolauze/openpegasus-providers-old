
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommonDatabaseDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommonDatabaseDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommonDatabaseDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommonDatabaseDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommonDatabaseDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommonDatabaseDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommonDatabaseDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommonDatabaseDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommonDatabaseDeps_TRU64.h"
#else
#	include "UNIX_CommonDatabaseDeps_STUB.h"
#endif
