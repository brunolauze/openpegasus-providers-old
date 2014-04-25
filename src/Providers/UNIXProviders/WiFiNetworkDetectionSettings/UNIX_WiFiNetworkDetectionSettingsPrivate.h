
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_TRU64.h"
#else
#	include "UNIX_WiFiNetworkDetectionSettingsPrivate_STUB.h"
#endif
