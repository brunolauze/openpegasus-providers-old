
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResourcePoolDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResourcePoolDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResourcePoolDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResourcePoolDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResourcePoolDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResourcePoolDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResourcePoolDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResourcePoolDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResourcePoolDeps_TRU64.h"
#else
#	include "UNIX_ResourcePoolDeps_STUB.h"
#endif
