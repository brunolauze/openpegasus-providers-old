
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CDROMDrivePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CDROMDrivePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CDROMDrivePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CDROMDrivePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CDROMDrivePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CDROMDrivePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CDROMDrivePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CDROMDrivePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CDROMDrivePrivate_TRU64.h"
#else
#	include "UNIX_CDROMDrivePrivate_STUB.h"
#endif
