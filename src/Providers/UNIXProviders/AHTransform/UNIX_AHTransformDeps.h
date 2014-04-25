
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AHTransformDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AHTransformDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AHTransformDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AHTransformDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AHTransformDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AHTransformDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AHTransformDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AHTransformDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AHTransformDeps_TRU64.h"
#else
#	include "UNIX_AHTransformDeps_STUB.h"
#endif
