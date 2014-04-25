
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FCPortStatisticsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FCPortStatisticsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FCPortStatisticsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FCPortStatisticsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FCPortStatisticsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FCPortStatisticsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FCPortStatisticsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FCPortStatisticsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FCPortStatisticsDeps_TRU64.h"
#else
#	include "UNIX_FCPortStatisticsDeps_STUB.h"
#endif
