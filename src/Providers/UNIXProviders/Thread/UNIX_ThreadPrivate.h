
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ThreadPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ThreadPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ThreadPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ThreadPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ThreadPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ThreadPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ThreadPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ThreadPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ThreadPrivate_TRU64.h"
#else
#	include "UNIX_ThreadPrivate_STUB.h"
#endif
