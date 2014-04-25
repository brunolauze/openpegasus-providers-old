
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DeviceSAPImplementationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DeviceSAPImplementationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DeviceSAPImplementationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DeviceSAPImplementationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DeviceSAPImplementationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DeviceSAPImplementationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DeviceSAPImplementationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DeviceSAPImplementationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DeviceSAPImplementationPrivate_TRU64.h"
#else
#	include "UNIX_DeviceSAPImplementationPrivate_STUB.h"
#endif
