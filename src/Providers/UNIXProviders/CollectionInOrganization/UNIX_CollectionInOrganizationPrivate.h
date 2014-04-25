
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectionInOrganizationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectionInOrganizationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectionInOrganizationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectionInOrganizationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectionInOrganizationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectionInOrganizationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectionInOrganizationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectionInOrganizationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectionInOrganizationPrivate_TRU64.h"
#else
#	include "UNIX_CollectionInOrganizationPrivate_STUB.h"
#endif
