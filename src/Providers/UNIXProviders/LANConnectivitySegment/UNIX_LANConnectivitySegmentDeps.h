
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LANConnectivitySegmentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LANConnectivitySegmentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LANConnectivitySegmentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LANConnectivitySegmentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LANConnectivitySegmentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LANConnectivitySegmentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LANConnectivitySegmentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LANConnectivitySegmentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LANConnectivitySegmentDeps_TRU64.h"
#else
#	include "UNIX_LANConnectivitySegmentDeps_STUB.h"
#endif
