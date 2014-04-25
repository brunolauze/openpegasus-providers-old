
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherRoleInformationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherRoleInformationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherRoleInformationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherRoleInformationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherRoleInformationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherRoleInformationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherRoleInformationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherRoleInformationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherRoleInformationDeps_TRU64.h"
#else
#	include "UNIX_OtherRoleInformationDeps_STUB.h"
#endif
