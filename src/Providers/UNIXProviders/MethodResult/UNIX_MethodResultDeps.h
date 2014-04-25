
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodResultDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodResultDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodResultDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodResultDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodResultDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodResultDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodResultDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodResultDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodResultDeps_TRU64.h"
#else
#	include "UNIX_MethodResultDeps_STUB.h"
#endif
