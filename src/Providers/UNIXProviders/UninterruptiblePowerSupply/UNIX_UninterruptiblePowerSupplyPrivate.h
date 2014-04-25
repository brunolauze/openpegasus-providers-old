
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UninterruptiblePowerSupplyPrivate_TRU64.h"
#else
#	include "UNIX_UninterruptiblePowerSupplyPrivate_STUB.h"
#endif
