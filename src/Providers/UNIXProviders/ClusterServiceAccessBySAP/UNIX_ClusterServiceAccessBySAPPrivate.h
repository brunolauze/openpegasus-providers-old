
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClusterServiceAccessBySAPPrivate_TRU64.h"
#else
#	include "UNIX_ClusterServiceAccessBySAPPrivate_STUB.h"
#endif
