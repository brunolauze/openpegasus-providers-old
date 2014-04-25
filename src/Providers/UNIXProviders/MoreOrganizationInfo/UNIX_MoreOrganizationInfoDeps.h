
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MoreOrganizationInfoDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MoreOrganizationInfoDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MoreOrganizationInfoDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MoreOrganizationInfoDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MoreOrganizationInfoDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MoreOrganizationInfoDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MoreOrganizationInfoDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MoreOrganizationInfoDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MoreOrganizationInfoDeps_TRU64.h"
#else
#	include "UNIX_MoreOrganizationInfoDeps_STUB.h"
#endif
