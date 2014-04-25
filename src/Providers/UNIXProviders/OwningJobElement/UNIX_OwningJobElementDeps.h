
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OwningJobElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OwningJobElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OwningJobElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OwningJobElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OwningJobElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OwningJobElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OwningJobElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OwningJobElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OwningJobElementDeps_TRU64.h"
#else
#	include "UNIX_OwningJobElementDeps_STUB.h"
#endif
