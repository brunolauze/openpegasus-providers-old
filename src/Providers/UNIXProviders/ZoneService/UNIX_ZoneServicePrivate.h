
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ZoneServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ZoneServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ZoneServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ZoneServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ZoneServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ZoneServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ZoneServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ZoneServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ZoneServicePrivate_TRU64.h"
#else
#	include "UNIX_ZoneServicePrivate_STUB.h"
#endif
