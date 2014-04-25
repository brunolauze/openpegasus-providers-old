
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerSourceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerSourceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerSourceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerSourceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerSourceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerSourceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerSourceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerSourceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerSourceDeps_TRU64.h"
#else
#	include "UNIX_PowerSourceDeps_STUB.h"
#endif
