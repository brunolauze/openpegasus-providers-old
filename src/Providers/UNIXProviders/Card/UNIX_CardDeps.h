
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CardDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CardDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CardDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CardDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CardDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CardDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CardDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CardDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CardDeps_TRU64.h"
#else
#	include "UNIX_CardDeps_STUB.h"
#endif
