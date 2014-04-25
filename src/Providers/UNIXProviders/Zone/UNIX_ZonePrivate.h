
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ZonePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ZonePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ZonePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ZonePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ZonePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ZonePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ZonePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ZonePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ZonePrivate_TRU64.h"
#else
#	include "UNIX_ZonePrivate_STUB.h"
#endif
