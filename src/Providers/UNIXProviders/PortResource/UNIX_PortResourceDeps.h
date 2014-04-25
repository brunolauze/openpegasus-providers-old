
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PortResourceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PortResourceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PortResourceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PortResourceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PortResourceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PortResourceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PortResourceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PortResourceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PortResourceDeps_TRU64.h"
#else
#	include "UNIX_PortResourceDeps_STUB.h"
#endif
