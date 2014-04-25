
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComputerSystemIRQDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComputerSystemIRQDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComputerSystemIRQDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComputerSystemIRQDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComputerSystemIRQDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComputerSystemIRQDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComputerSystemIRQDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComputerSystemIRQDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComputerSystemIRQDeps_TRU64.h"
#else
#	include "UNIX_ComputerSystemIRQDeps_STUB.h"
#endif
