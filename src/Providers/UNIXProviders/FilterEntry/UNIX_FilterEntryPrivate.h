
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilterEntryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilterEntryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilterEntryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilterEntryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilterEntryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilterEntryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilterEntryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilterEntryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilterEntryPrivate_TRU64.h"
#else
#	include "UNIX_FilterEntryPrivate_STUB.h"
#endif
