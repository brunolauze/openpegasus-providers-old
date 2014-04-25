
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_InstalledProductDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_InstalledProductDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_InstalledProductDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_InstalledProductDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_InstalledProductDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_InstalledProductDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_InstalledProductDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_InstalledProductDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_InstalledProductDeps_TRU64.h"
#else
#	include "UNIX_InstalledProductDeps_STUB.h"
#endif
