
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoHeadDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoHeadDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoHeadDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoHeadDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoHeadDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoHeadDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoHeadDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoHeadDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoHeadDeps_TRU64.h"
#else
#	include "UNIX_VideoHeadDeps_STUB.h"
#endif
