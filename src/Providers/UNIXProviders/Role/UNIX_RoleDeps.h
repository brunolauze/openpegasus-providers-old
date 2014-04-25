
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoleDeps_TRU64.h"
#else
#	include "UNIX_RoleDeps_STUB.h"
#endif
