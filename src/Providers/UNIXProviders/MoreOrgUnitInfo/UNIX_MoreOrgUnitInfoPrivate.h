
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MoreOrgUnitInfoPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MoreOrgUnitInfoPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MoreOrgUnitInfoPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MoreOrgUnitInfoPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MoreOrgUnitInfoPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MoreOrgUnitInfoPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MoreOrgUnitInfoPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MoreOrgUnitInfoPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MoreOrgUnitInfoPrivate_TRU64.h"
#else
#	include "UNIX_MoreOrgUnitInfoPrivate_STUB.h"
#endif
