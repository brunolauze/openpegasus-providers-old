
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherOrgUnitInformationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherOrgUnitInformationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherOrgUnitInformationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherOrgUnitInformationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherOrgUnitInformationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherOrgUnitInformationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherOrgUnitInformationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherOrgUnitInformationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherOrgUnitInformationDeps_TRU64.h"
#else
#	include "UNIX_OtherOrgUnitInformationDeps_STUB.h"
#endif
