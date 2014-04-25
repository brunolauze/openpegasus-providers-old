
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BinarySensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BinarySensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BinarySensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BinarySensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BinarySensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BinarySensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BinarySensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BinarySensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BinarySensorDeps_TRU64.h"
#else
#	include "UNIX_BinarySensorDeps_STUB.h"
#endif
