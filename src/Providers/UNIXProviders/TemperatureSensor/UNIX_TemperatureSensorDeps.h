
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TemperatureSensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TemperatureSensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TemperatureSensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TemperatureSensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TemperatureSensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TemperatureSensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TemperatureSensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TemperatureSensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TemperatureSensorDeps_TRU64.h"
#else
#	include "UNIX_TemperatureSensorDeps_STUB.h"
#endif
