
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortControllerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortControllerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortControllerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortControllerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortControllerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortControllerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortControllerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortControllerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortControllerDeps_TRU64.h"
#else
#	include "UNIX_PortControllerDeps_STUB.h"
#endif
