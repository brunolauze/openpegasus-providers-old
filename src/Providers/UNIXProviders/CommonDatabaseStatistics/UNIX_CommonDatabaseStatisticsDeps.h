
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CommonDatabaseStatisticsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CommonDatabaseStatisticsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CommonDatabaseStatisticsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CommonDatabaseStatisticsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CommonDatabaseStatisticsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CommonDatabaseStatisticsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CommonDatabaseStatisticsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CommonDatabaseStatisticsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CommonDatabaseStatisticsDeps_TRU64.h"
#else
#	include "UNIX_CommonDatabaseStatisticsDeps_STUB.h"
#endif
