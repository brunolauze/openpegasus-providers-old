
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ResourcePoolPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ResourcePoolPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ResourcePoolPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ResourcePoolPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ResourcePoolPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ResourcePoolPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ResourcePoolPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ResourcePoolPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ResourcePoolPrivate_TRU64.h"
#else
#	include "UNIX_ResourcePoolPrivate_STUB.h"
#endif
