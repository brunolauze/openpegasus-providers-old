
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledProductImagePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledProductImagePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledProductImagePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledProductImagePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledProductImagePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledProductImagePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledProductImagePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledProductImagePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledProductImagePrivate_TRU64.h"
#else
#	include "UNIX_InstalledProductImagePrivate_STUB.h"
#endif
