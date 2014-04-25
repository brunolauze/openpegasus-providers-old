
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IsSpareDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IsSpareDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IsSpareDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IsSpareDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IsSpareDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IsSpareDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IsSpareDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IsSpareDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IsSpareDeps_TRU64.h"
#else
#	include "UNIX_IsSpareDeps_STUB.h"
#endif
