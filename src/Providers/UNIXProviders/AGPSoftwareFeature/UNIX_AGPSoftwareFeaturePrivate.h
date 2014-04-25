
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AGPSoftwareFeaturePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AGPSoftwareFeaturePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AGPSoftwareFeaturePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AGPSoftwareFeaturePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AGPSoftwareFeaturePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AGPSoftwareFeaturePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AGPSoftwareFeaturePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AGPSoftwareFeaturePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AGPSoftwareFeaturePrivate_TRU64.h"
#else
#	include "UNIX_AGPSoftwareFeaturePrivate_STUB.h"
#endif
