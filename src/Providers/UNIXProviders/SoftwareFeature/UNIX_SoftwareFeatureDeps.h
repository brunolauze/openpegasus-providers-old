
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareFeatureDeps_TRU64.h"
#else
#	include "UNIX_SoftwareFeatureDeps_STUB.h"
#endif
