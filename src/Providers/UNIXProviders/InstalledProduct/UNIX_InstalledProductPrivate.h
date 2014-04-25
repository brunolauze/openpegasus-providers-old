
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledProductPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledProductPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledProductPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledProductPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledProductPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledProductPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledProductPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledProductPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledProductPrivate_TRU64.h"
#else
#	include "UNIX_InstalledProductPrivate_STUB.h"
#endif
