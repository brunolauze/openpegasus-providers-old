
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ActsAsSpareDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ActsAsSpareDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ActsAsSpareDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ActsAsSpareDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ActsAsSpareDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ActsAsSpareDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ActsAsSpareDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ActsAsSpareDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ActsAsSpareDeps_TRU64.h"
#else
#	include "UNIX_ActsAsSpareDeps_STUB.h"
#endif
