
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DVDDrivePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DVDDrivePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DVDDrivePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DVDDrivePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DVDDrivePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DVDDrivePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DVDDrivePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DVDDrivePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DVDDrivePrivate_TRU64.h"
#else
#	include "UNIX_DVDDrivePrivate_STUB.h"
#endif
