
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkPrivate_TRU64.h"
#else
#	include "UNIX_NetworkPrivate_STUB.h"
#endif
