
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RealizesAggregatePExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RealizesAggregatePExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RealizesAggregatePExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RealizesAggregatePExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RealizesAggregatePExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RealizesAggregatePExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RealizesAggregatePExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RealizesAggregatePExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RealizesAggregatePExtentDeps_TRU64.h"
#else
#	include "UNIX_RealizesAggregatePExtentDeps_STUB.h"
#endif
