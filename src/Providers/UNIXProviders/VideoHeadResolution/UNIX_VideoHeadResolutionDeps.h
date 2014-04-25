
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoHeadResolutionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoHeadResolutionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoHeadResolutionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoHeadResolutionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoHeadResolutionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoHeadResolutionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoHeadResolutionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoHeadResolutionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoHeadResolutionDeps_TRU64.h"
#else
#	include "UNIX_VideoHeadResolutionDeps_STUB.h"
#endif
