
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ZoneSetPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ZoneSetPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ZoneSetPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ZoneSetPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ZoneSetPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ZoneSetPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ZoneSetPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ZoneSetPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ZoneSetPrivate_TRU64.h"
#else
#	include "UNIX_ZoneSetPrivate_STUB.h"
#endif
