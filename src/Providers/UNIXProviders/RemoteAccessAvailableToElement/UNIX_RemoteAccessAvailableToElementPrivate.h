
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RemoteAccessAvailableToElementPrivate_TRU64.h"
#else
#	include "UNIX_RemoteAccessAvailableToElementPrivate_STUB.h"
#endif
