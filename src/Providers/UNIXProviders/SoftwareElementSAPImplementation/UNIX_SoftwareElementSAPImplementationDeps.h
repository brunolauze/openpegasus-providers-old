
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SoftwareElementSAPImplementationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SoftwareElementSAPImplementationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SoftwareElementSAPImplementationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SoftwareElementSAPImplementationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SoftwareElementSAPImplementationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SoftwareElementSAPImplementationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SoftwareElementSAPImplementationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SoftwareElementSAPImplementationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SoftwareElementSAPImplementationDeps_TRU64.h"
#else
#	include "UNIX_SoftwareElementSAPImplementationDeps_STUB.h"
#endif
