
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledOSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledOSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledOSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledOSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledOSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledOSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledOSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledOSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledOSDeps_TRU64.h"
#else
#	include "UNIX_InstalledOSDeps_STUB.h"
#endif
