
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PreconfiguredTransportActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PreconfiguredTransportActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PreconfiguredTransportActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PreconfiguredTransportActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PreconfiguredTransportActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PreconfiguredTransportActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PreconfiguredTransportActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PreconfiguredTransportActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PreconfiguredTransportActionDeps_TRU64.h"
#else
#	include "UNIX_PreconfiguredTransportActionDeps_STUB.h"
#endif
