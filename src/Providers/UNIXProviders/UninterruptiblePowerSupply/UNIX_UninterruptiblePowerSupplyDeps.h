
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UninterruptiblePowerSupplyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UninterruptiblePowerSupplyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UninterruptiblePowerSupplyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UninterruptiblePowerSupplyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UninterruptiblePowerSupplyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UninterruptiblePowerSupplyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UninterruptiblePowerSupplyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UninterruptiblePowerSupplyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UninterruptiblePowerSupplyDeps_TRU64.h"
#else
#	include "UNIX_UninterruptiblePowerSupplyDeps_STUB.h"
#endif
