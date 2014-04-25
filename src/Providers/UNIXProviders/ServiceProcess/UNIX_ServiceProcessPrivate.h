
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ServiceProcessPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ServiceProcessPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ServiceProcessPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ServiceProcessPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ServiceProcessPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ServiceProcessPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ServiceProcessPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ServiceProcessPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ServiceProcessPrivate_TRU64.h"
#else
#	include "UNIX_ServiceProcessPrivate_STUB.h"
#endif
