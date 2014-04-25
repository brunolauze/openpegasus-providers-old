
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_TRU64.h"
#else
#	include "UNIX_NetworkAdapterRedundancyComponentPrivate_STUB.h"
#endif
