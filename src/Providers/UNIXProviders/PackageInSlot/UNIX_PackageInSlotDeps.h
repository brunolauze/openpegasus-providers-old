
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageInSlotDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageInSlotDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageInSlotDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageInSlotDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageInSlotDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageInSlotDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageInSlotDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageInSlotDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageInSlotDeps_TRU64.h"
#else
#	include "UNIX_PackageInSlotDeps_STUB.h"
#endif
