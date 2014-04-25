
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SnapshotOfVirtualSystemPrivate_TRU64.h"
#else
#	include "UNIX_SnapshotOfVirtualSystemPrivate_STUB.h"
#endif
