
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoBIOSFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoBIOSFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoBIOSFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoBIOSFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoBIOSFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoBIOSFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoBIOSFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoBIOSFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoBIOSFeatureDeps_TRU64.h"
#else
#	include "UNIX_VideoBIOSFeatureDeps_STUB.h"
#endif
