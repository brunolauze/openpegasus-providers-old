
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerAdapterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerAdapterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerAdapterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerAdapterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerAdapterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerAdapterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerAdapterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerAdapterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerAdapterPrivate_TRU64.h"
#else
#	include "UNIX_ObjectManagerAdapterPrivate_STUB.h"
#endif
