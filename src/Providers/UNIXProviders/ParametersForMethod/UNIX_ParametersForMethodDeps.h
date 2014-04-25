
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParametersForMethodDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParametersForMethodDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParametersForMethodDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParametersForMethodDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParametersForMethodDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParametersForMethodDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParametersForMethodDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParametersForMethodDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParametersForMethodDeps_TRU64.h"
#else
#	include "UNIX_ParametersForMethodDeps_STUB.h"
#endif
