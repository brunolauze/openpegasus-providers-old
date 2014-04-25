
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiRadioDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiRadioDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiRadioDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiRadioDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiRadioDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiRadioDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiRadioDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiRadioDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiRadioDeps_TRU64.h"
#else
#	include "UNIX_WiFiRadioDeps_STUB.h"
#endif
