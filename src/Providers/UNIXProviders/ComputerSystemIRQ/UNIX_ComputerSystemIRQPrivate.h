
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ComputerSystemIRQPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ComputerSystemIRQPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ComputerSystemIRQPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ComputerSystemIRQPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ComputerSystemIRQPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ComputerSystemIRQPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ComputerSystemIRQPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ComputerSystemIRQPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ComputerSystemIRQPrivate_TRU64.h"
#else
#	include "UNIX_ComputerSystemIRQPrivate_STUB.h"
#endif
