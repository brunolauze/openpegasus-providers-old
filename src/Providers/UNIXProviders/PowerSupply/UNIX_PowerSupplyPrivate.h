
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PowerSupplyPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PowerSupplyPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PowerSupplyPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PowerSupplyPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PowerSupplyPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PowerSupplyPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PowerSupplyPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PowerSupplyPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PowerSupplyPrivate_TRU64.h"
#else
#	include "UNIX_PowerSupplyPrivate_STUB.h"
#endif
