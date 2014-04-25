
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SnapshotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SnapshotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SnapshotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SnapshotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SnapshotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SnapshotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SnapshotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SnapshotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SnapshotDeps_TRU64.h"
#else
#	include "UNIX_SnapshotDeps_STUB.h"
#endif
