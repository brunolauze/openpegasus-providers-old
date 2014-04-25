
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareIdentityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareIdentityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareIdentityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareIdentityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareIdentityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareIdentityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareIdentityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareIdentityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareIdentityPrivate_TRU64.h"
#else
#	include "UNIX_SoftwareIdentityPrivate_STUB.h"
#endif
