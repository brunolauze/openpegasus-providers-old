
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SerialInterfacePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SerialInterfacePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SerialInterfacePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SerialInterfacePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SerialInterfacePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SerialInterfacePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SerialInterfacePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SerialInterfacePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SerialInterfacePrivate_TRU64.h"
#else
#	include "UNIX_SerialInterfacePrivate_STUB.h"
#endif
