
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalStatisticsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalStatisticsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalStatisticsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalStatisticsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalStatisticsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalStatisticsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalStatisticsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalStatisticsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalStatisticsDeps_TRU64.h"
#else
#	include "UNIX_PhysicalStatisticsDeps_STUB.h"
#endif
