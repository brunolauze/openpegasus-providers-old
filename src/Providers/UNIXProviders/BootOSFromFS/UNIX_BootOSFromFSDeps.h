
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_BootOSFromFSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_BootOSFromFSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_BootOSFromFSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_BootOSFromFSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_BootOSFromFSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_BootOSFromFSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_BootOSFromFSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_BootOSFromFSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_BootOSFromFSDeps_TRU64.h"
#else
#	include "UNIX_BootOSFromFSDeps_STUB.h"
#endif
