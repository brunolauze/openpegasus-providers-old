
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_TRU64.h"
#else
#	include "UNIX_SoftwareFeatureSAPImplementationPrivate_STUB.h"
#endif
