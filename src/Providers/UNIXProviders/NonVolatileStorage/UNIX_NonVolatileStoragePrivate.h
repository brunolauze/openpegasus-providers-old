
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NonVolatileStoragePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NonVolatileStoragePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NonVolatileStoragePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NonVolatileStoragePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NonVolatileStoragePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NonVolatileStoragePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NonVolatileStoragePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NonVolatileStoragePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NonVolatileStoragePrivate_TRU64.h"
#else
#	include "UNIX_NonVolatileStoragePrivate_STUB.h"
#endif
