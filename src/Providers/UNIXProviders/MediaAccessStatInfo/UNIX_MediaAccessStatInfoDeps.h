
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaAccessStatInfoDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaAccessStatInfoDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaAccessStatInfoDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaAccessStatInfoDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaAccessStatInfoDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaAccessStatInfoDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaAccessStatInfoDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaAccessStatInfoDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaAccessStatInfoDeps_TRU64.h"
#else
#	include "UNIX_MediaAccessStatInfoDeps_STUB.h"
#endif
