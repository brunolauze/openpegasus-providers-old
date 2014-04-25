
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortControllerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortControllerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortControllerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortControllerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortControllerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortControllerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortControllerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortControllerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortControllerPrivate_TRU64.h"
#else
#	include "UNIX_PortControllerPrivate_STUB.h"
#endif
