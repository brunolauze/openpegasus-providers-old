
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClusterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClusterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClusterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClusterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClusterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClusterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClusterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClusterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClusterDeps_TRU64.h"
#else
#	include "UNIX_ClusterDeps_STUB.h"
#endif
