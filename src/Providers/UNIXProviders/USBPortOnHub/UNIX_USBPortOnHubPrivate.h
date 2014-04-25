
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBPortOnHubPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBPortOnHubPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBPortOnHubPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBPortOnHubPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBPortOnHubPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBPortOnHubPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBPortOnHubPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBPortOnHubPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBPortOnHubPrivate_TRU64.h"
#else
#	include "UNIX_USBPortOnHubPrivate_STUB.h"
#endif
