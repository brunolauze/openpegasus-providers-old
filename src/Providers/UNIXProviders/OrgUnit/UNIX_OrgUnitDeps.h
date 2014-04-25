
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrgUnitDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrgUnitDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrgUnitDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrgUnitDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrgUnitDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrgUnitDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrgUnitDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrgUnitDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrgUnitDeps_TRU64.h"
#else
#	include "UNIX_OrgUnitDeps_STUB.h"
#endif
