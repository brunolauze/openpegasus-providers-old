
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MediaAccessStatDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MediaAccessStatDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MediaAccessStatDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MediaAccessStatDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MediaAccessStatDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MediaAccessStatDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MediaAccessStatDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MediaAccessStatDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MediaAccessStatDataDeps_TRU64.h"
#else
#	include "UNIX_MediaAccessStatDataDeps_STUB.h"
#endif
