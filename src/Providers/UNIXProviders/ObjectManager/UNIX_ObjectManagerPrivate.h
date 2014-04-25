
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ObjectManagerPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ObjectManagerPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ObjectManagerPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ObjectManagerPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ObjectManagerPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ObjectManagerPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ObjectManagerPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ObjectManagerPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ObjectManagerPrivate_TRU64.h"
#else
#	include "UNIX_ObjectManagerPrivate_STUB.h"
#endif
