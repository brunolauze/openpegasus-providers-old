
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FibrePortActiveLoginDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FibrePortActiveLoginDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FibrePortActiveLoginDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FibrePortActiveLoginDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FibrePortActiveLoginDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FibrePortActiveLoginDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FibrePortActiveLoginDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FibrePortActiveLoginDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FibrePortActiveLoginDeps_TRU64.h"
#else
#	include "UNIX_FibrePortActiveLoginDeps_STUB.h"
#endif
