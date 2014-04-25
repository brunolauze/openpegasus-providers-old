
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedTransformDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedTransformDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedTransformDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedTransformDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedTransformDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedTransformDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedTransformDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedTransformDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedTransformDeps_TRU64.h"
#else
#	include "UNIX_ContainedTransformDeps_STUB.h"
#endif
