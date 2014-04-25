
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedDatabaseSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedDatabaseSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedDatabaseSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedDatabaseSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedDatabaseSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedDatabaseSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedDatabaseSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedDatabaseSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedDatabaseSystemPrivate_TRU64.h"
#else
#	include "UNIX_AssociatedDatabaseSystemPrivate_STUB.h"
#endif
