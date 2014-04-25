
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MultiStateSensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MultiStateSensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MultiStateSensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MultiStateSensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MultiStateSensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MultiStateSensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MultiStateSensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MultiStateSensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MultiStateSensorDeps_TRU64.h"
#else
#	include "UNIX_MultiStateSensorDeps_STUB.h"
#endif
