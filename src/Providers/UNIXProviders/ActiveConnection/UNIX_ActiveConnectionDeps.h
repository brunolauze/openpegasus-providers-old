
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ActiveConnectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ActiveConnectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ActiveConnectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ActiveConnectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ActiveConnectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ActiveConnectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ActiveConnectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ActiveConnectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ActiveConnectionDeps_TRU64.h"
#else
#	include "UNIX_ActiveConnectionDeps_STUB.h"
#endif
