
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPClustersInASDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPClustersInASDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPClustersInASDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPClustersInASDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPClustersInASDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPClustersInASDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPClustersInASDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPClustersInASDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPClustersInASDeps_TRU64.h"
#else
#	include "UNIX_BGPClustersInASDeps_STUB.h"
#endif
