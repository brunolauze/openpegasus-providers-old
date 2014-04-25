
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionInOrganizationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionInOrganizationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionInOrganizationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionInOrganizationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionInOrganizationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionInOrganizationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionInOrganizationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionInOrganizationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionInOrganizationDeps_TRU64.h"
#else
#	include "UNIX_CollectionInOrganizationDeps_STUB.h"
#endif
