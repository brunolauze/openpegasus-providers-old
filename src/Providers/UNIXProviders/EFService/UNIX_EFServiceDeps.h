
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EFServiceDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EFServiceDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EFServiceDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EFServiceDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EFServiceDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EFServiceDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EFServiceDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EFServiceDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EFServiceDeps_TRU64.h"
#else
#	include "UNIX_EFServiceDeps_STUB.h"
#endif
