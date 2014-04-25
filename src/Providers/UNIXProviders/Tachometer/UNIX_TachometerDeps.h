
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TachometerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TachometerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TachometerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TachometerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TachometerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TachometerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TachometerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TachometerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TachometerDeps_TRU64.h"
#else
#	include "UNIX_TachometerDeps_STUB.h"
#endif
