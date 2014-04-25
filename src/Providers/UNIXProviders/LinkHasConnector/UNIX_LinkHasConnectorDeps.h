
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LinkHasConnectorDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LinkHasConnectorDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LinkHasConnectorDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LinkHasConnectorDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LinkHasConnectorDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LinkHasConnectorDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LinkHasConnectorDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LinkHasConnectorDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LinkHasConnectorDeps_TRU64.h"
#else
#	include "UNIX_LinkHasConnectorDeps_STUB.h"
#endif
