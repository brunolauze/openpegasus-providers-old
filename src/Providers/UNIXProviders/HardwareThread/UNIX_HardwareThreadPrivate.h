
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HardwareThreadPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HardwareThreadPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HardwareThreadPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HardwareThreadPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HardwareThreadPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HardwareThreadPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HardwareThreadPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HardwareThreadPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HardwareThreadPrivate_TRU64.h"
#else
#	include "UNIX_HardwareThreadPrivate_STUB.h"
#endif
