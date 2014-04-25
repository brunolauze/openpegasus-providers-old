
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstReadDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstReadDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstReadDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstReadDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstReadDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstReadDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstReadDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstReadDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstReadDeps_TRU64.h"
#else
#	include "UNIX_InstReadDeps_STUB.h"
#endif
