
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ManagesAccountPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ManagesAccountPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ManagesAccountPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ManagesAccountPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ManagesAccountPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ManagesAccountPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ManagesAccountPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ManagesAccountPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ManagesAccountPrivate_TRU64.h"
#else
#	include "UNIX_ManagesAccountPrivate_STUB.h"
#endif
