
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ISDNModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ISDNModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ISDNModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ISDNModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ISDNModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ISDNModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ISDNModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ISDNModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ISDNModemDeps_TRU64.h"
#else
#	include "UNIX_ISDNModemDeps_STUB.h"
#endif
