
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AdministrativeDistanceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AdministrativeDistanceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AdministrativeDistanceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AdministrativeDistanceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AdministrativeDistanceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AdministrativeDistanceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AdministrativeDistanceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AdministrativeDistanceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AdministrativeDistanceDeps_TRU64.h"
#else
#	include "UNIX_AdministrativeDistanceDeps_STUB.h"
#endif
