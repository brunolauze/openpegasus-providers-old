
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSFeatureDeps_TRU64.h"
#else
#	include "UNIX_BIOSFeatureDeps_STUB.h"
#endif
