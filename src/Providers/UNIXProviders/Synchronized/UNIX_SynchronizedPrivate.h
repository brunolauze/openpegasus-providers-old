
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SynchronizedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SynchronizedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SynchronizedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SynchronizedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SynchronizedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SynchronizedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SynchronizedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SynchronizedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SynchronizedPrivate_TRU64.h"
#else
#	include "UNIX_SynchronizedPrivate_STUB.h"
#endif
