
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MessageLogPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MessageLogPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MessageLogPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MessageLogPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MessageLogPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MessageLogPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MessageLogPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MessageLogPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MessageLogPrivate_TRU64.h"
#else
#	include "UNIX_MessageLogPrivate_STUB.h"
#endif
