
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SwitchPortStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SwitchPortStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SwitchPortStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SwitchPortStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SwitchPortStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SwitchPortStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SwitchPortStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SwitchPortStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SwitchPortStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_SwitchPortStatisticsPrivate_STUB.h"
#endif
