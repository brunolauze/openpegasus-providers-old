
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemBusCardPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemBusCardPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemBusCardPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemBusCardPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemBusCardPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemBusCardPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemBusCardPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemBusCardPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemBusCardPrivate_TRU64.h"
#else
#	include "UNIX_SystemBusCardPrivate_STUB.h"
#endif
