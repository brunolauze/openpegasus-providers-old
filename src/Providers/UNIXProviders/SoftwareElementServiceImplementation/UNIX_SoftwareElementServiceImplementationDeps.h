
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareElementServiceImplementationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareElementServiceImplementationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareElementServiceImplementationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareElementServiceImplementationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareElementServiceImplementationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareElementServiceImplementationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareElementServiceImplementationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareElementServiceImplementationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareElementServiceImplementationDeps_TRU64.h"
#else
#	include "UNIX_SoftwareElementServiceImplementationDeps_STUB.h"
#endif
