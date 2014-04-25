
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SupportAccessPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SupportAccessPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SupportAccessPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SupportAccessPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SupportAccessPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SupportAccessPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SupportAccessPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SupportAccessPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SupportAccessPrivate_TRU64.h"
#else
#	include "UNIX_SupportAccessPrivate_STUB.h"
#endif
