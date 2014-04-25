
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PrintSupplyDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PrintSupplyDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PrintSupplyDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PrintSupplyDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PrintSupplyDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PrintSupplyDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PrintSupplyDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PrintSupplyDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PrintSupplyDeps_TRU64.h"
#else
#	include "UNIX_PrintSupplyDeps_STUB.h"
#endif
