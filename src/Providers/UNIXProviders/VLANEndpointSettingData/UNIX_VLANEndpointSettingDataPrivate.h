
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VLANEndpointSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VLANEndpointSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VLANEndpointSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VLANEndpointSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VLANEndpointSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VLANEndpointSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VLANEndpointSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VLANEndpointSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VLANEndpointSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_VLANEndpointSettingDataPrivate_STUB.h"
#endif
