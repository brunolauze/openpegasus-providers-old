
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EthernetPortStatisticsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EthernetPortStatisticsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EthernetPortStatisticsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EthernetPortStatisticsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EthernetPortStatisticsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EthernetPortStatisticsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EthernetPortStatisticsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EthernetPortStatisticsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EthernetPortStatisticsPrivate_TRU64.h"
#else
#	include "UNIX_EthernetPortStatisticsPrivate_STUB.h"
#endif
