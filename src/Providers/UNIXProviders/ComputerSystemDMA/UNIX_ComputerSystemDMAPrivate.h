
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComputerSystemDMAPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComputerSystemDMAPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComputerSystemDMAPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComputerSystemDMAPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComputerSystemDMAPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComputerSystemDMAPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComputerSystemDMAPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComputerSystemDMAPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComputerSystemDMAPrivate_TRU64.h"
#else
#	include "UNIX_ComputerSystemDMAPrivate_STUB.h"
#endif
