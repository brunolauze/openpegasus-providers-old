
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CableModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CableModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CableModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CableModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CableModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CableModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CableModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CableModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CableModemDeps_TRU64.h"
#else
#	include "UNIX_CableModemDeps_STUB.h"
#endif
