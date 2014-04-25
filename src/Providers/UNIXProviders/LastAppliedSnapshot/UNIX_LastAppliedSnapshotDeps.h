
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LastAppliedSnapshotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LastAppliedSnapshotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LastAppliedSnapshotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LastAppliedSnapshotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LastAppliedSnapshotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LastAppliedSnapshotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LastAppliedSnapshotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LastAppliedSnapshotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LastAppliedSnapshotDeps_TRU64.h"
#else
#	include "UNIX_LastAppliedSnapshotDeps_STUB.h"
#endif
