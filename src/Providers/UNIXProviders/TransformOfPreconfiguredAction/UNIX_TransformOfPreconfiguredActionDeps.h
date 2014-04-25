
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_TransformOfPreconfiguredActionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_TransformOfPreconfiguredActionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_TransformOfPreconfiguredActionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_TransformOfPreconfiguredActionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_TransformOfPreconfiguredActionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_TransformOfPreconfiguredActionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_TransformOfPreconfiguredActionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_TransformOfPreconfiguredActionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_TransformOfPreconfiguredActionDeps_TRU64.h"
#else
#	include "UNIX_TransformOfPreconfiguredActionDeps_STUB.h"
#endif
