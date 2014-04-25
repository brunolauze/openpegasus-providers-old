
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ReplacementSetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ReplacementSetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ReplacementSetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ReplacementSetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ReplacementSetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ReplacementSetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ReplacementSetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ReplacementSetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ReplacementSetDeps_TRU64.h"
#else
#	include "UNIX_ReplacementSetDeps_STUB.h"
#endif
