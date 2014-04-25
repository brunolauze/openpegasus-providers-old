
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemBusCardDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemBusCardDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemBusCardDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemBusCardDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemBusCardDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemBusCardDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemBusCardDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemBusCardDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemBusCardDeps_TRU64.h"
#else
#	include "UNIX_SystemBusCardDeps_STUB.h"
#endif
