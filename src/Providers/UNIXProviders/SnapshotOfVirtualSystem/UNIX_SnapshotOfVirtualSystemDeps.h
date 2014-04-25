
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SnapshotOfVirtualSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SnapshotOfVirtualSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SnapshotOfVirtualSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SnapshotOfVirtualSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SnapshotOfVirtualSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SnapshotOfVirtualSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SnapshotOfVirtualSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SnapshotOfVirtualSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SnapshotOfVirtualSystemDeps_TRU64.h"
#else
#	include "UNIX_SnapshotOfVirtualSystemDeps_STUB.h"
#endif
