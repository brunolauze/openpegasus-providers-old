
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemotePortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemotePortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemotePortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemotePortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemotePortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemotePortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemotePortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemotePortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemotePortDeps_TRU64.h"
#else
#	include "UNIX_RemotePortDeps_STUB.h"
#endif
