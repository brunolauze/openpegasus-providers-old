
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstDeletionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstDeletionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstDeletionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstDeletionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstDeletionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstDeletionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstDeletionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstDeletionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstDeletionDeps_TRU64.h"
#else
#	include "UNIX_InstDeletionDeps_STUB.h"
#endif
