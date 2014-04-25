
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCPortDeps_TRU64.h"
#else
#	include "UNIX_FCPortDeps_STUB.h"
#endif
