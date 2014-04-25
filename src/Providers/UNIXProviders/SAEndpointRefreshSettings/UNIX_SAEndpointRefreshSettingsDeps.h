
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SAEndpointRefreshSettingsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SAEndpointRefreshSettingsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SAEndpointRefreshSettingsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SAEndpointRefreshSettingsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SAEndpointRefreshSettingsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SAEndpointRefreshSettingsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SAEndpointRefreshSettingsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SAEndpointRefreshSettingsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SAEndpointRefreshSettingsDeps_TRU64.h"
#else
#	include "UNIX_SAEndpointRefreshSettingsDeps_STUB.h"
#endif
