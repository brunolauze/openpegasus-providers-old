
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_TRU64.h"
#else
#	include "UNIX_AggregatePSExtentBasedOnPExtentPrivate_STUB.h"
#endif
