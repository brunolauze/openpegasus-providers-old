
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WiFiEndpointSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WiFiEndpointSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WiFiEndpointSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WiFiEndpointSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WiFiEndpointSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WiFiEndpointSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WiFiEndpointSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WiFiEndpointSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WiFiEndpointSettingsPrivate_TRU64.h"
#else
#	include "UNIX_WiFiEndpointSettingsPrivate_STUB.h"
#endif
