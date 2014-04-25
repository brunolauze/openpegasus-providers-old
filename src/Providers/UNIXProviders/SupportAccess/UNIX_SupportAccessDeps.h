
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SupportAccessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SupportAccessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SupportAccessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SupportAccessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SupportAccessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SupportAccessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SupportAccessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SupportAccessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SupportAccessDeps_TRU64.h"
#else
#	include "UNIX_SupportAccessDeps_STUB.h"
#endif
