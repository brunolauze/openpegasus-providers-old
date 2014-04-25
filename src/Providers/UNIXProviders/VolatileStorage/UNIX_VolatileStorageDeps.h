
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VolatileStorageDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VolatileStorageDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VolatileStorageDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VolatileStorageDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VolatileStorageDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VolatileStorageDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VolatileStorageDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VolatileStorageDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VolatileStorageDeps_TRU64.h"
#else
#	include "UNIX_VolatileStorageDeps_STUB.h"
#endif
