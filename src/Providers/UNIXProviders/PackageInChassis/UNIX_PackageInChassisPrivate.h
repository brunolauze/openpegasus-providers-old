
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageInChassisPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageInChassisPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageInChassisPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageInChassisPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageInChassisPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageInChassisPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageInChassisPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageInChassisPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageInChassisPrivate_TRU64.h"
#else
#	include "UNIX_PackageInChassisPrivate_STUB.h"
#endif
