
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_TRU64.h"
#else
#	include "UNIX_ApplicationSystemSoftwareFeaturePrivate_STUB.h"
#endif
