
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RunningOSDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RunningOSDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RunningOSDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RunningOSDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RunningOSDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RunningOSDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RunningOSDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RunningOSDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RunningOSDeps_TRU64.h"
#else
#	include "UNIX_RunningOSDeps_STUB.h"
#endif
