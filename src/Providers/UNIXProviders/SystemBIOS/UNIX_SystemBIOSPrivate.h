
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SystemBIOSPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SystemBIOSPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SystemBIOSPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SystemBIOSPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SystemBIOSPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SystemBIOSPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SystemBIOSPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SystemBIOSPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SystemBIOSPrivate_TRU64.h"
#else
#	include "UNIX_SystemBIOSPrivate_STUB.h"
#endif
