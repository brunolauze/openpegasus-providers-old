
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_MethodParametersPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_MethodParametersPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_MethodParametersPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_MethodParametersPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_MethodParametersPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_MethodParametersPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_MethodParametersPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_MethodParametersPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_MethodParametersPrivate_TRU64.h"
#else
#	include "UNIX_MethodParametersPrivate_STUB.h"
#endif
