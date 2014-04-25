
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledSoftwareIdentityPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledSoftwareIdentityPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledSoftwareIdentityPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledSoftwareIdentityPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledSoftwareIdentityPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledSoftwareIdentityPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledSoftwareIdentityPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledSoftwareIdentityPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledSoftwareIdentityPrivate_TRU64.h"
#else
#	include "UNIX_InstalledSoftwareIdentityPrivate_STUB.h"
#endif
