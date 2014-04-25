
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SAEndpointRefreshSettingsPrivate_TRU64.h"
#else
#	include "UNIX_SAEndpointRefreshSettingsPrivate_STUB.h"
#endif
