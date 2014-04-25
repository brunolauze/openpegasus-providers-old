
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TimeZonePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TimeZonePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TimeZonePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TimeZonePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TimeZonePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TimeZonePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TimeZonePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TimeZonePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TimeZonePrivate_TRU64.h"
#else
#	include "UNIX_TimeZonePrivate_STUB.h"
#endif
