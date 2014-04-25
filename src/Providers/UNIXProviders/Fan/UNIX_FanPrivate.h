
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FanPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FanPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FanPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FanPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FanPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FanPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FanPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FanPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FanPrivate_TRU64.h"
#else
#	include "UNIX_FanPrivate_STUB.h"
#endif
