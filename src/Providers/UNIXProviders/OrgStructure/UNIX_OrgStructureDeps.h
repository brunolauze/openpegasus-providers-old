
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrgStructureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrgStructureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrgStructureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrgStructureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrgStructureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrgStructureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrgStructureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrgStructureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrgStructureDeps_TRU64.h"
#else
#	include "UNIX_OrgStructureDeps_STUB.h"
#endif
