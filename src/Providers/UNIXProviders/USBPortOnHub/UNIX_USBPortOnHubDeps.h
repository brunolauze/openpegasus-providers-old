
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBPortOnHubDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBPortOnHubDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBPortOnHubDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBPortOnHubDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBPortOnHubDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBPortOnHubDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBPortOnHubDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBPortOnHubDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBPortOnHubDeps_TRU64.h"
#else
#	include "UNIX_USBPortOnHubDeps_STUB.h"
#endif
