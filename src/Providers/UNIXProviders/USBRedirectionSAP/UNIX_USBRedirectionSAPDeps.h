
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBRedirectionSAPDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBRedirectionSAPDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBRedirectionSAPDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBRedirectionSAPDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBRedirectionSAPDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBRedirectionSAPDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBRedirectionSAPDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBRedirectionSAPDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBRedirectionSAPDeps_TRU64.h"
#else
#	include "UNIX_USBRedirectionSAPDeps_STUB.h"
#endif
