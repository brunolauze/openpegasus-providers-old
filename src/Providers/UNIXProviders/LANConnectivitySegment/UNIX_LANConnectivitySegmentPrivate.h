
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LANConnectivitySegmentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LANConnectivitySegmentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LANConnectivitySegmentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LANConnectivitySegmentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LANConnectivitySegmentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LANConnectivitySegmentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LANConnectivitySegmentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LANConnectivitySegmentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LANConnectivitySegmentPrivate_TRU64.h"
#else
#	include "UNIX_LANConnectivitySegmentPrivate_STUB.h"
#endif
