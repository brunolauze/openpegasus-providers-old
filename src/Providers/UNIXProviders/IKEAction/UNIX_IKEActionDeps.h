
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKEActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKEActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKEActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKEActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKEActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKEActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKEActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKEActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKEActionDeps_TRU64.h"
#else
#	include "UNIX_IKEActionDeps_STUB.h"
#endif
