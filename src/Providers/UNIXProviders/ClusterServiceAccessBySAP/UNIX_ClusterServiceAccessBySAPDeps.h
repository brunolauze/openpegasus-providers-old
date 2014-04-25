
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClusterServiceAccessBySAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClusterServiceAccessBySAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClusterServiceAccessBySAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClusterServiceAccessBySAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClusterServiceAccessBySAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClusterServiceAccessBySAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClusterServiceAccessBySAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClusterServiceAccessBySAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClusterServiceAccessBySAPDeps_TRU64.h"
#else
#	include "UNIX_ClusterServiceAccessBySAPDeps_STUB.h"
#endif
