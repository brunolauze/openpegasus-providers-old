
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkPacketActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkPacketActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkPacketActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkPacketActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkPacketActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkPacketActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkPacketActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkPacketActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkPacketActionDeps_TRU64.h"
#else
#	include "UNIX_NetworkPacketActionDeps_STUB.h"
#endif
