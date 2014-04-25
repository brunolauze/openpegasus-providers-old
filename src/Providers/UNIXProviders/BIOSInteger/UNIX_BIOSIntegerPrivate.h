
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSIntegerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSIntegerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSIntegerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSIntegerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSIntegerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSIntegerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSIntegerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSIntegerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSIntegerPrivate_TRU64.h"
#else
#	include "UNIX_BIOSIntegerPrivate_STUB.h"
#endif
