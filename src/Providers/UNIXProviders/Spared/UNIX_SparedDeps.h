
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SparedDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SparedDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SparedDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SparedDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SparedDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SparedDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SparedDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SparedDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SparedDeps_TRU64.h"
#else
#	include "UNIX_SparedDeps_STUB.h"
#endif
