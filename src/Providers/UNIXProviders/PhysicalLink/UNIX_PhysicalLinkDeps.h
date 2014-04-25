
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalLinkDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalLinkDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalLinkDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalLinkDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalLinkDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalLinkDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalLinkDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalLinkDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalLinkDeps_TRU64.h"
#else
#	include "UNIX_PhysicalLinkDeps_STUB.h"
#endif
