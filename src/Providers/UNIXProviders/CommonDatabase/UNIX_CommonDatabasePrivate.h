
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommonDatabasePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommonDatabasePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommonDatabasePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommonDatabasePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommonDatabasePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommonDatabasePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommonDatabasePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommonDatabasePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommonDatabasePrivate_TRU64.h"
#else
#	include "UNIX_CommonDatabasePrivate_STUB.h"
#endif
