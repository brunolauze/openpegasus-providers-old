
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoBIOSFeaturePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoBIOSFeaturePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoBIOSFeaturePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoBIOSFeaturePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoBIOSFeaturePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoBIOSFeaturePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoBIOSFeaturePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoBIOSFeaturePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoBIOSFeaturePrivate_TRU64.h"
#else
#	include "UNIX_VideoBIOSFeaturePrivate_STUB.h"
#endif
