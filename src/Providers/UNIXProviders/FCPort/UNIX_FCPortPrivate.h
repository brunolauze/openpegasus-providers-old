
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCPortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCPortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCPortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCPortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCPortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCPortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCPortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCPortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCPortPrivate_TRU64.h"
#else
#	include "UNIX_FCPortPrivate_STUB.h"
#endif
