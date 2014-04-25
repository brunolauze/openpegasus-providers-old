
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_TRU64.h"
#else
#	include "UNIX_VirtualSystemSnapshotServiceCapabilitiesDeps_STUB.h"
#endif
