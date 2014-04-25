
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SnapshotOfExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SnapshotOfExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SnapshotOfExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SnapshotOfExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SnapshotOfExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SnapshotOfExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SnapshotOfExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SnapshotOfExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SnapshotOfExtentPrivate_TRU64.h"
#else
#	include "UNIX_SnapshotOfExtentPrivate_STUB.h"
#endif
