
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AuthorizationTargetDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AuthorizationTargetDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AuthorizationTargetDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AuthorizationTargetDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AuthorizationTargetDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AuthorizationTargetDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AuthorizationTargetDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AuthorizationTargetDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AuthorizationTargetDeps_TRU64.h"
#else
#	include "UNIX_AuthorizationTargetDeps_STUB.h"
#endif
