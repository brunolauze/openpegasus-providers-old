
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate_STUB.h"
#endif
