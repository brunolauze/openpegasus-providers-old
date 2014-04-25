
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSFeaturePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSFeaturePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSFeaturePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSFeaturePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSFeaturePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSFeaturePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSFeaturePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSFeaturePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSFeaturePrivate_TRU64.h"
#else
#	include "UNIX_BIOSFeaturePrivate_STUB.h"
#endif
