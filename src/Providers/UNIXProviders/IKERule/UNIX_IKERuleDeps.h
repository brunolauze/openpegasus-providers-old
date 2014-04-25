
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKERuleDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKERuleDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKERuleDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKERuleDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKERuleDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKERuleDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKERuleDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKERuleDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKERuleDeps_TRU64.h"
#else
#	include "UNIX_IKERuleDeps_STUB.h"
#endif
