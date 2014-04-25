
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiEndpointSettingsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiEndpointSettingsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiEndpointSettingsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiEndpointSettingsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiEndpointSettingsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiEndpointSettingsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiEndpointSettingsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiEndpointSettingsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiEndpointSettingsDeps_TRU64.h"
#else
#	include "UNIX_WiFiEndpointSettingsDeps_STUB.h"
#endif
