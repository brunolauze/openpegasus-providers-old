
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutersInBGPClusterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutersInBGPClusterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutersInBGPClusterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutersInBGPClusterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutersInBGPClusterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutersInBGPClusterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutersInBGPClusterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutersInBGPClusterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutersInBGPClusterDeps_TRU64.h"
#else
#	include "UNIX_RoutersInBGPClusterDeps_STUB.h"
#endif
