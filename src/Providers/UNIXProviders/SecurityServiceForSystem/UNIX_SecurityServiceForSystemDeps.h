
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SecurityServiceForSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SecurityServiceForSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SecurityServiceForSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SecurityServiceForSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SecurityServiceForSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SecurityServiceForSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SecurityServiceForSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SecurityServiceForSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SecurityServiceForSystemDeps_TRU64.h"
#else
#	include "UNIX_SecurityServiceForSystemDeps_STUB.h"
#endif
