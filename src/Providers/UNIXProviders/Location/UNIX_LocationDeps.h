
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LocationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LocationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LocationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LocationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LocationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LocationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LocationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LocationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LocationDeps_TRU64.h"
#else
#	include "UNIX_LocationDeps_STUB.h"
#endif
