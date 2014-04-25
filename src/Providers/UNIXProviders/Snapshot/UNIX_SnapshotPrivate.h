
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SnapshotPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SnapshotPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SnapshotPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SnapshotPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SnapshotPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SnapshotPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SnapshotPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SnapshotPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SnapshotPrivate_TRU64.h"
#else
#	include "UNIX_SnapshotPrivate_STUB.h"
#endif
