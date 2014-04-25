
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComputerSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComputerSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComputerSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComputerSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComputerSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComputerSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComputerSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComputerSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComputerSystemPrivate_TRU64.h"
#else
#	include "UNIX_ComputerSystemPrivate_STUB.h"
#endif
