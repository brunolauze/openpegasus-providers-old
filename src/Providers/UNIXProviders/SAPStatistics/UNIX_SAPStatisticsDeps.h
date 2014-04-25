
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SAPStatisticsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SAPStatisticsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SAPStatisticsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SAPStatisticsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SAPStatisticsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SAPStatisticsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SAPStatisticsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SAPStatisticsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SAPStatisticsDeps_TRU64.h"
#else
#	include "UNIX_SAPStatisticsDeps_STUB.h"
#endif
