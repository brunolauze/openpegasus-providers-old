
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_BlockStatisticsCapabilitiesPrivate_STUB.h"
#endif
