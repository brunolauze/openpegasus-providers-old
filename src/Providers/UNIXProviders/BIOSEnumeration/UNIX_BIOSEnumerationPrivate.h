
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSEnumerationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSEnumerationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSEnumerationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSEnumerationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSEnumerationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSEnumerationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSEnumerationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSEnumerationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSEnumerationPrivate_TRU64.h"
#else
#	include "UNIX_BIOSEnumerationPrivate_STUB.h"
#endif
