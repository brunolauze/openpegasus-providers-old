
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBHubDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBHubDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBHubDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBHubDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBHubDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBHubDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBHubDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBHubDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBHubDeps_TRU64.h"
#else
#	include "UNIX_USBHubDeps_STUB.h"
#endif
