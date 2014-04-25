
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClusterPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClusterPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClusterPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClusterPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClusterPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClusterPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClusterPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClusterPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClusterPrivate_TRU64.h"
#else
#	include "UNIX_ClusterPrivate_STUB.h"
#endif
