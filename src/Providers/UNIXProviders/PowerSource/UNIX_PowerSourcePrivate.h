
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerSourcePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerSourcePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerSourcePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerSourcePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerSourcePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerSourcePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerSourcePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerSourcePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerSourcePrivate_TRU64.h"
#else
#	include "UNIX_PowerSourcePrivate_STUB.h"
#endif
