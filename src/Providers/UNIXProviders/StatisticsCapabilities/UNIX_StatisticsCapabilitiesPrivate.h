
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_StatisticsCapabilitiesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_StatisticsCapabilitiesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_StatisticsCapabilitiesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_StatisticsCapabilitiesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_StatisticsCapabilitiesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_StatisticsCapabilitiesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_StatisticsCapabilitiesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_StatisticsCapabilitiesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_StatisticsCapabilitiesPrivate_TRU64.h"
#else
#	include "UNIX_StatisticsCapabilitiesPrivate_STUB.h"
#endif
