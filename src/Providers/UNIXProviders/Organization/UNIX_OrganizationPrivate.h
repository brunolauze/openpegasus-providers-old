
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OrganizationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OrganizationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OrganizationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OrganizationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OrganizationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OrganizationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OrganizationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OrganizationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OrganizationPrivate_TRU64.h"
#else
#	include "UNIX_OrganizationPrivate_STUB.h"
#endif
