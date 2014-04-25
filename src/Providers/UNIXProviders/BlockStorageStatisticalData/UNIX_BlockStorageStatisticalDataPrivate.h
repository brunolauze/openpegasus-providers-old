
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStorageStatisticalDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStorageStatisticalDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStorageStatisticalDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStorageStatisticalDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStorageStatisticalDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStorageStatisticalDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStorageStatisticalDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStorageStatisticalDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStorageStatisticalDataPrivate_TRU64.h"
#else
#	include "UNIX_BlockStorageStatisticalDataPrivate_STUB.h"
#endif
