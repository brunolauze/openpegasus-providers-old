
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolatileStoragePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolatileStoragePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolatileStoragePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolatileStoragePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolatileStoragePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolatileStoragePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolatileStoragePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolatileStoragePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolatileStoragePrivate_TRU64.h"
#else
#	include "UNIX_VolatileStoragePrivate_STUB.h"
#endif
