
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LimitedAccessPortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LimitedAccessPortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LimitedAccessPortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LimitedAccessPortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LimitedAccessPortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LimitedAccessPortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LimitedAccessPortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LimitedAccessPortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LimitedAccessPortPrivate_TRU64.h"
#else
#	include "UNIX_LimitedAccessPortPrivate_STUB.h"
#endif
