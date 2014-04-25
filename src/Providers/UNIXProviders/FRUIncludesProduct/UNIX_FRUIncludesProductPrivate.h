
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUIncludesProductPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUIncludesProductPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUIncludesProductPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUIncludesProductPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUIncludesProductPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUIncludesProductPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUIncludesProductPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUIncludesProductPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUIncludesProductPrivate_TRU64.h"
#else
#	include "UNIX_FRUIncludesProductPrivate_STUB.h"
#endif
