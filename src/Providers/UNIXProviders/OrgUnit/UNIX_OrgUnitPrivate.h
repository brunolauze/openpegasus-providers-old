
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrgUnitPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrgUnitPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrgUnitPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrgUnitPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrgUnitPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrgUnitPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrgUnitPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrgUnitPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrgUnitPrivate_TRU64.h"
#else
#	include "UNIX_OrgUnitPrivate_STUB.h"
#endif
