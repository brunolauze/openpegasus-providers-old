
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_TRU64.h"
#else
#	include "UNIX_OperatingSystemSoftwareFeatureDeps_STUB.h"
#endif
