
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledSoftwareElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledSoftwareElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledSoftwareElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledSoftwareElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledSoftwareElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledSoftwareElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledSoftwareElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledSoftwareElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledSoftwareElementDeps_TRU64.h"
#else
#	include "UNIX_InstalledSoftwareElementDeps_STUB.h"
#endif
