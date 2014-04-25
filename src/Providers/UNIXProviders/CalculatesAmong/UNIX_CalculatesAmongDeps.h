
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CalculatesAmongDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CalculatesAmongDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CalculatesAmongDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CalculatesAmongDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CalculatesAmongDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CalculatesAmongDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CalculatesAmongDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CalculatesAmongDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CalculatesAmongDeps_TRU64.h"
#else
#	include "UNIX_CalculatesAmongDeps_STUB.h"
#endif
