
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DatabaseStorageAreaPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DatabaseStorageAreaPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DatabaseStorageAreaPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DatabaseStorageAreaPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DatabaseStorageAreaPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DatabaseStorageAreaPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DatabaseStorageAreaPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DatabaseStorageAreaPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DatabaseStorageAreaPrivate_TRU64.h"
#else
#	include "UNIX_DatabaseStorageAreaPrivate_STUB.h"
#endif
