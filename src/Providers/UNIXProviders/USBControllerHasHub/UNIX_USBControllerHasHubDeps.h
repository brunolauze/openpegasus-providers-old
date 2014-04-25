
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBControllerHasHubDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBControllerHasHubDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBControllerHasHubDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBControllerHasHubDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBControllerHasHubDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBControllerHasHubDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBControllerHasHubDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBControllerHasHubDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBControllerHasHubDeps_TRU64.h"
#else
#	include "UNIX_USBControllerHasHubDeps_STUB.h"
#endif
