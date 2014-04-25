
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_USBPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_USBPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_USBPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_USBPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_USBPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_USBPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_USBPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_USBPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_USBPortDeps_TRU64.h"
#else
#	include "UNIX_USBPortDeps_STUB.h"
#endif
