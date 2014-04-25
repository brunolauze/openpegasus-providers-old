
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_TRU64.h"
#else
#	include "UNIX_FRUIncludesSoftwareFeatureDeps_STUB.h"
#endif
