
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSElementPrivate_TRU64.h"
#else
#	include "UNIX_BIOSElementPrivate_STUB.h"
#endif
