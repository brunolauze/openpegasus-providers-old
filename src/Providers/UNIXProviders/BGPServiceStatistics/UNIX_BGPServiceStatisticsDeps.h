
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BGPServiceStatisticsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BGPServiceStatisticsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BGPServiceStatisticsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BGPServiceStatisticsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BGPServiceStatisticsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BGPServiceStatisticsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BGPServiceStatisticsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BGPServiceStatisticsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BGPServiceStatisticsDeps_TRU64.h"
#else
#	include "UNIX_BGPServiceStatisticsDeps_STUB.h"
#endif
