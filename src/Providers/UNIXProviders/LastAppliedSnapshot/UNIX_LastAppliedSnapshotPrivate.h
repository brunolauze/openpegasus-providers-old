
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LastAppliedSnapshotPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LastAppliedSnapshotPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LastAppliedSnapshotPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LastAppliedSnapshotPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LastAppliedSnapshotPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LastAppliedSnapshotPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LastAppliedSnapshotPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LastAppliedSnapshotPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LastAppliedSnapshotPrivate_TRU64.h"
#else
#	include "UNIX_LastAppliedSnapshotPrivate_STUB.h"
#endif
