
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BlockStatisticsManifestCollectionDeps_TRU64.h"
#else
#	include "UNIX_BlockStatisticsManifestCollectionDeps_STUB.h"
#endif
