
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemotePortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemotePortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemotePortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemotePortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemotePortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemotePortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemotePortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemotePortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemotePortPrivate_TRU64.h"
#else
#	include "UNIX_RemotePortPrivate_STUB.h"
#endif
