
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ClusteringSAPPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ClusteringSAPPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ClusteringSAPPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ClusteringSAPPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ClusteringSAPPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ClusteringSAPPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ClusteringSAPPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ClusteringSAPPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ClusteringSAPPrivate_TRU64.h"
#else
#	include "UNIX_ClusteringSAPPrivate_STUB.h"
#endif
