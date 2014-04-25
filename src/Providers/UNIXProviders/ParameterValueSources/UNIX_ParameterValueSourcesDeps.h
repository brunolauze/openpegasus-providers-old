
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParameterValueSourcesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParameterValueSourcesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParameterValueSourcesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParameterValueSourcesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParameterValueSourcesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParameterValueSourcesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParameterValueSourcesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParameterValueSourcesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParameterValueSourcesDeps_TRU64.h"
#else
#	include "UNIX_ParameterValueSourcesDeps_STUB.h"
#endif
