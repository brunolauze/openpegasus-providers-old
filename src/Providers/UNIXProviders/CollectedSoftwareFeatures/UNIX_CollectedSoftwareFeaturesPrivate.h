
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CollectedSoftwareFeaturesPrivate_TRU64.h"
#else
#	include "UNIX_CollectedSoftwareFeaturesPrivate_STUB.h"
#endif
