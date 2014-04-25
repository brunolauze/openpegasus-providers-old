
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregatePExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregatePExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregatePExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregatePExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregatePExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregatePExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregatePExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregatePExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregatePExtentPrivate_TRU64.h"
#else
#	include "UNIX_AggregatePExtentPrivate_STUB.h"
#endif
