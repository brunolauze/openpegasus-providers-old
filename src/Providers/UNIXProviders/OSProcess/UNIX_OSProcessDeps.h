
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OSProcessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OSProcessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OSProcessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OSProcessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OSProcessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OSProcessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OSProcessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OSProcessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OSProcessDeps_TRU64.h"
#else
#	include "UNIX_OSProcessDeps_STUB.h"
#endif
