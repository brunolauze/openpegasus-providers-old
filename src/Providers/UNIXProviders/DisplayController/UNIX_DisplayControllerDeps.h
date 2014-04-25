
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DisplayControllerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DisplayControllerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DisplayControllerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DisplayControllerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DisplayControllerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DisplayControllerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DisplayControllerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DisplayControllerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DisplayControllerDeps_TRU64.h"
#else
#	include "UNIX_DisplayControllerDeps_STUB.h"
#endif
