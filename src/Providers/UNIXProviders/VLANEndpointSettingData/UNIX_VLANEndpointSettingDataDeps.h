
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VLANEndpointSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VLANEndpointSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VLANEndpointSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VLANEndpointSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VLANEndpointSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VLANEndpointSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VLANEndpointSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VLANEndpointSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VLANEndpointSettingDataDeps_TRU64.h"
#else
#	include "UNIX_VLANEndpointSettingDataDeps_STUB.h"
#endif
