
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdministrativeDistancePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdministrativeDistancePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdministrativeDistancePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdministrativeDistancePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdministrativeDistancePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdministrativeDistancePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdministrativeDistancePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdministrativeDistancePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdministrativeDistancePrivate_TRU64.h"
#else
#	include "UNIX_AdministrativeDistancePrivate_STUB.h"
#endif
