
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_TRU64.h"
#else
#	include "UNIX_FRUIncludesSoftwareFeaturePrivate_STUB.h"
#endif
