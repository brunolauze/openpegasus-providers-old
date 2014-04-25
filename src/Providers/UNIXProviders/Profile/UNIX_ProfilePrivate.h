
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProfilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProfilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProfilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProfilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProfilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProfilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProfilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProfilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProfilePrivate_TRU64.h"
#else
#	include "UNIX_ProfilePrivate_STUB.h"
#endif
