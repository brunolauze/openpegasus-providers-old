
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_TRU64.h"
#else
#	include "UNIX_BlockStatisticsManifestCollectionPrivate_STUB.h"
#endif
