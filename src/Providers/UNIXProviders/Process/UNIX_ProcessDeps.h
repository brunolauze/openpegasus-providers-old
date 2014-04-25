
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ProcessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ProcessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ProcessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ProcessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ProcessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ProcessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ProcessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ProcessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ProcessDeps_TRU64.h"
#else
#	include "UNIX_ProcessDeps_STUB.h"
#endif
