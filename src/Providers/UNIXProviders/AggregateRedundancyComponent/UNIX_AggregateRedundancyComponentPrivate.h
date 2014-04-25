
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregateRedundancyComponentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregateRedundancyComponentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregateRedundancyComponentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregateRedundancyComponentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregateRedundancyComponentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregateRedundancyComponentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregateRedundancyComponentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregateRedundancyComponentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregateRedundancyComponentPrivate_TRU64.h"
#else
#	include "UNIX_AggregateRedundancyComponentPrivate_STUB.h"
#endif
