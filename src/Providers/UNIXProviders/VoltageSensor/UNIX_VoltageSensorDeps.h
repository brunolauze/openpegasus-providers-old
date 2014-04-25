
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VoltageSensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VoltageSensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VoltageSensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VoltageSensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VoltageSensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VoltageSensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VoltageSensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VoltageSensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VoltageSensorDeps_TRU64.h"
#else
#	include "UNIX_VoltageSensorDeps_STUB.h"
#endif
