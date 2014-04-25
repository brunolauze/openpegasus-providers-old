
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_HDSLModemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_HDSLModemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_HDSLModemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_HDSLModemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_HDSLModemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_HDSLModemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_HDSLModemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_HDSLModemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_HDSLModemDeps_TRU64.h"
#else
#	include "UNIX_HDSLModemDeps_STUB.h"
#endif
