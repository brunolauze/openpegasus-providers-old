
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BootServiceAccessBySAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BootServiceAccessBySAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BootServiceAccessBySAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BootServiceAccessBySAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BootServiceAccessBySAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BootServiceAccessBySAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BootServiceAccessBySAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BootServiceAccessBySAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BootServiceAccessBySAPDeps_TRU64.h"
#else
#	include "UNIX_BootServiceAccessBySAPDeps_STUB.h"
#endif
