
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IRQDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IRQDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IRQDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IRQDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IRQDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IRQDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IRQDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IRQDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IRQDeps_TRU64.h"
#else
#	include "UNIX_IRQDeps_STUB.h"
#endif
