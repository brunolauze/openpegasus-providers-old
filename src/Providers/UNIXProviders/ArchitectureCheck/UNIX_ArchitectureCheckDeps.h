
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ArchitectureCheckDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ArchitectureCheckDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ArchitectureCheckDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ArchitectureCheckDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ArchitectureCheckDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ArchitectureCheckDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ArchitectureCheckDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ArchitectureCheckDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ArchitectureCheckDeps_TRU64.h"
#else
#	include "UNIX_ArchitectureCheckDeps_STUB.h"
#endif
