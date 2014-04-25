
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStorageStatisticalDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStorageStatisticalDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStorageStatisticalDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStorageStatisticalDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStorageStatisticalDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStorageStatisticalDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStorageStatisticalDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStorageStatisticalDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStorageStatisticalDataDeps_TRU64.h"
#else
#	include "UNIX_BlockStorageStatisticalDataDeps_STUB.h"
#endif
