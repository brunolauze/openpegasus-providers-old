
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NonVolatileStorageDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NonVolatileStorageDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NonVolatileStorageDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NonVolatileStorageDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NonVolatileStorageDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NonVolatileStorageDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NonVolatileStorageDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NonVolatileStorageDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NonVolatileStorageDeps_TRU64.h"
#else
#	include "UNIX_NonVolatileStorageDeps_STUB.h"
#endif
