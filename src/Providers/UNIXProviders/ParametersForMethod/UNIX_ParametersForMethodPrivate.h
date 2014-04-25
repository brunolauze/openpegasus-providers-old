
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ParametersForMethodPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ParametersForMethodPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ParametersForMethodPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ParametersForMethodPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ParametersForMethodPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ParametersForMethodPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ParametersForMethodPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ParametersForMethodPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ParametersForMethodPrivate_TRU64.h"
#else
#	include "UNIX_ParametersForMethodPrivate_STUB.h"
#endif
