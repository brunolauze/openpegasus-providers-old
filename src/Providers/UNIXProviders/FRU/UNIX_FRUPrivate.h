
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUPrivate_TRU64.h"
#else
#	include "UNIX_FRUPrivate_STUB.h"
#endif
