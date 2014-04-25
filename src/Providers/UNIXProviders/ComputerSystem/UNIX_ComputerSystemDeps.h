
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComputerSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComputerSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComputerSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComputerSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComputerSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComputerSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComputerSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComputerSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComputerSystemDeps_TRU64.h"
#else
#	include "UNIX_ComputerSystemDeps_STUB.h"
#endif
