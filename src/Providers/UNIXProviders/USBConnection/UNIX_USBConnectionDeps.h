
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBConnectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBConnectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBConnectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBConnectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBConnectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBConnectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBConnectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBConnectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBConnectionDeps_TRU64.h"
#else
#	include "UNIX_USBConnectionDeps_STUB.h"
#endif
