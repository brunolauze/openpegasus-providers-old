
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregatePSExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregatePSExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregatePSExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregatePSExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregatePSExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregatePSExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregatePSExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregatePSExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregatePSExtentPrivate_TRU64.h"
#else
#	include "UNIX_AggregatePSExtentPrivate_STUB.h"
#endif
