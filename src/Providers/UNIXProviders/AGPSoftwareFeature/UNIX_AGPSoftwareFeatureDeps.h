
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AGPSoftwareFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AGPSoftwareFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AGPSoftwareFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AGPSoftwareFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AGPSoftwareFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AGPSoftwareFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AGPSoftwareFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AGPSoftwareFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AGPSoftwareFeatureDeps_TRU64.h"
#else
#	include "UNIX_AGPSoftwareFeatureDeps_STUB.h"
#endif
