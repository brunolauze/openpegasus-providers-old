
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodParametersDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodParametersDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodParametersDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodParametersDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodParametersDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodParametersDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodParametersDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodParametersDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodParametersDeps_TRU64.h"
#else
#	include "UNIX_MethodParametersDeps_STUB.h"
#endif
