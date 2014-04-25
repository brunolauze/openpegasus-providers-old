
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculatedRoutesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculatedRoutesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculatedRoutesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculatedRoutesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculatedRoutesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculatedRoutesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculatedRoutesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculatedRoutesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculatedRoutesDeps_TRU64.h"
#else
#	include "UNIX_CalculatedRoutesDeps_STUB.h"
#endif
