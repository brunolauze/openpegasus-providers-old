
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstDeletionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstDeletionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstDeletionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstDeletionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstDeletionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstDeletionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstDeletionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstDeletionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstDeletionPrivate_TRU64.h"
#else
#	include "UNIX_InstDeletionPrivate_STUB.h"
#endif
