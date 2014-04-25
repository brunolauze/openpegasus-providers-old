
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_TRU64.h"
#else
#	include "UNIX_AssociatedSupplyVoltageSensorDeps_STUB.h"
#endif
