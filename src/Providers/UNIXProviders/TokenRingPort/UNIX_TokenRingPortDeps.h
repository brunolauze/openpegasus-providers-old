
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TokenRingPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TokenRingPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TokenRingPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TokenRingPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TokenRingPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TokenRingPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TokenRingPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TokenRingPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TokenRingPortDeps_TRU64.h"
#else
#	include "UNIX_TokenRingPortDeps_STUB.h"
#endif
