
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_TRU64.h"
#else
#	include "UNIX_AggregatePSExtentBasedOnPExtentDeps_STUB.h"
#endif
