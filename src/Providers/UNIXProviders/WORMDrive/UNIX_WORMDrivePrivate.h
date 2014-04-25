
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WORMDrivePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WORMDrivePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WORMDrivePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WORMDrivePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WORMDrivePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WORMDrivePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WORMDrivePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WORMDrivePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WORMDrivePrivate_TRU64.h"
#else
#	include "UNIX_WORMDrivePrivate_STUB.h"
#endif
