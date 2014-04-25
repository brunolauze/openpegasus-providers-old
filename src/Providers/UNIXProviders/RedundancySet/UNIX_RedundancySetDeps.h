
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RedundancySetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RedundancySetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RedundancySetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RedundancySetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RedundancySetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RedundancySetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RedundancySetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RedundancySetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RedundancySetDeps_TRU64.h"
#else
#	include "UNIX_RedundancySetDeps_STUB.h"
#endif
