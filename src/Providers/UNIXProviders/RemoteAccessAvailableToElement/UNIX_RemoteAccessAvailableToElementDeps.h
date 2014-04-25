
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemoteAccessAvailableToElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemoteAccessAvailableToElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemoteAccessAvailableToElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemoteAccessAvailableToElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemoteAccessAvailableToElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemoteAccessAvailableToElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemoteAccessAvailableToElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemoteAccessAvailableToElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemoteAccessAvailableToElementDeps_TRU64.h"
#else
#	include "UNIX_RemoteAccessAvailableToElementDeps_STUB.h"
#endif
