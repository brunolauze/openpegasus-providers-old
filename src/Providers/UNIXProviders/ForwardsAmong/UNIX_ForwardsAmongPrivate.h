
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ForwardsAmongPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ForwardsAmongPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ForwardsAmongPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ForwardsAmongPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ForwardsAmongPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ForwardsAmongPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ForwardsAmongPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ForwardsAmongPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ForwardsAmongPrivate_TRU64.h"
#else
#	include "UNIX_ForwardsAmongPrivate_STUB.h"
#endif
