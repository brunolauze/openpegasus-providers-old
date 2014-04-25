
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageInChassisDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageInChassisDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageInChassisDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageInChassisDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageInChassisDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageInChassisDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageInChassisDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageInChassisDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageInChassisDeps_TRU64.h"
#else
#	include "UNIX_PackageInChassisDeps_STUB.h"
#endif
