
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RefrigerationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RefrigerationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RefrigerationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RefrigerationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RefrigerationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RefrigerationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RefrigerationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RefrigerationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RefrigerationDeps_TRU64.h"
#else
#	include "UNIX_RefrigerationDeps_STUB.h"
#endif
