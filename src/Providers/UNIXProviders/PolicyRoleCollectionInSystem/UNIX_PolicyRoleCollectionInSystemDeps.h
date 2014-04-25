
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyRoleCollectionInSystemDeps_TRU64.h"
#else
#	include "UNIX_PolicyRoleCollectionInSystemDeps_STUB.h"
#endif
