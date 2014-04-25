
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CurrentTimeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CurrentTimeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CurrentTimeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CurrentTimeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CurrentTimeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CurrentTimeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CurrentTimeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CurrentTimeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CurrentTimeDeps_TRU64.h"
#else
#	include "UNIX_CurrentTimeDeps_STUB.h"
#endif
