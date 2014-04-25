
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AffectedJobElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AffectedJobElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AffectedJobElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AffectedJobElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AffectedJobElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AffectedJobElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AffectedJobElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AffectedJobElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AffectedJobElementDeps_TRU64.h"
#else
#	include "UNIX_AffectedJobElementDeps_STUB.h"
#endif
