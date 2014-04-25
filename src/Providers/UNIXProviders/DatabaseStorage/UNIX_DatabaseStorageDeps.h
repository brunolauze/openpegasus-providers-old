
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseStorageDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseStorageDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseStorageDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseStorageDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseStorageDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseStorageDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseStorageDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseStorageDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseStorageDeps_TRU64.h"
#else
#	include "UNIX_DatabaseStorageDeps_STUB.h"
#endif
