
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SerialInterfaceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SerialInterfaceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SerialInterfaceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SerialInterfaceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SerialInterfaceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SerialInterfaceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SerialInterfaceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SerialInterfaceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SerialInterfaceDeps_TRU64.h"
#else
#	include "UNIX_SerialInterfaceDeps_STUB.h"
#endif
