
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_TRU64.h"
#else
#	include "UNIX_WiFiNetworkDetectionSettingsDeps_STUB.h"
#endif
