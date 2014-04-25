
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreambleFilterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreambleFilterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreambleFilterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreambleFilterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreambleFilterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreambleFilterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreambleFilterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreambleFilterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreambleFilterPrivate_TRU64.h"
#else
#	include "UNIX_PreambleFilterPrivate_STUB.h"
#endif
