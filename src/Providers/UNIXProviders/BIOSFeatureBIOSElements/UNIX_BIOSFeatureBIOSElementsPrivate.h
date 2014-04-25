
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_TRU64.h"
#else
#	include "UNIX_BIOSFeatureBIOSElementsPrivate_STUB.h"
#endif
