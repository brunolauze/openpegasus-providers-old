
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PackageTempSensorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PackageTempSensorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PackageTempSensorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PackageTempSensorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PackageTempSensorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PackageTempSensorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PackageTempSensorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PackageTempSensorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PackageTempSensorDeps_TRU64.h"
#else
#	include "UNIX_PackageTempSensorDeps_STUB.h"
#endif
