
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LogEntryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LogEntryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LogEntryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LogEntryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LogEntryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LogEntryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LogEntryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LogEntryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LogEntryPrivate_TRU64.h"
#else
#	include "UNIX_LogEntryPrivate_STUB.h"
#endif
