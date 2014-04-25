
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageLocationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageLocationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageLocationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageLocationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageLocationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageLocationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageLocationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageLocationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageLocationDeps_TRU64.h"
#else
#	include "UNIX_PackageLocationDeps_STUB.h"
#endif
