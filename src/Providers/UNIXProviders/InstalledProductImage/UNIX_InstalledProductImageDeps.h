
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledProductImageDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledProductImageDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledProductImageDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledProductImageDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledProductImageDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledProductImageDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledProductImageDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledProductImageDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledProductImageDeps_TRU64.h"
#else
#	include "UNIX_InstalledProductImageDeps_STUB.h"
#endif
