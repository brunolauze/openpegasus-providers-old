
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NetworkVirtualAdapterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NetworkVirtualAdapterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NetworkVirtualAdapterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NetworkVirtualAdapterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NetworkVirtualAdapterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NetworkVirtualAdapterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NetworkVirtualAdapterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NetworkVirtualAdapterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NetworkVirtualAdapterDeps_TRU64.h"
#else
#	include "UNIX_NetworkVirtualAdapterDeps_STUB.h"
#endif
