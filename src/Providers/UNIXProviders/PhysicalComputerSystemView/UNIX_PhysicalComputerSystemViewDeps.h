
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PhysicalComputerSystemViewDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PhysicalComputerSystemViewDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PhysicalComputerSystemViewDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PhysicalComputerSystemViewDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PhysicalComputerSystemViewDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PhysicalComputerSystemViewDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PhysicalComputerSystemViewDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PhysicalComputerSystemViewDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PhysicalComputerSystemViewDeps_TRU64.h"
#else
#	include "UNIX_PhysicalComputerSystemViewDeps_STUB.h"
#endif
